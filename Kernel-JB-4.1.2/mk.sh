#!/bin/bash
export CROSS_COMPILE=/home/sandra/source/arm-eabi-5.3/bin/arm-eabi-
all1=$(date +%s.%N)
echo "Copying config file";
cp arch/arm/configs/u1_apolo_defconfig .config ;

echo "Cleaning initramfs"
find ../initramfs -name ".git*" -exec rm -rf {} \;
find ../initramfs -name EMPTY_DIRECTORY -exec rm -rf {} \;
find -name '*.ko' -exec cp -av {} ../initramfs/lib/modules/ \;
chmod 644 ../initramfs/lib/modules/*
${CROSS_COMPILE}strip --strip-unneeded ../initramfs/lib/modules/*
chmod g-w ../initramfs/*.rc ../initramfs/default.prop && \

rm zImage

echo "Building Kernel now";
make clean
make -j4 arch=arm
cp arch/arm/boot/zImage zImage_in
#cp -v /home/none/android/kernel/hack_stock/galaxys2_kernel_repack/recovery.cm10.tar.xz .
./mkshbootimg.py zImage zImage_in payload.tar recovery.tar.xz
#../../../maketar.sh

cp .config arch/arm/configs/u1_apolo_defconfig;
all2=$(date +%s.%N)
echo "${bldgrn}Total elapsed time: ${txtrst}${grn}$(echo "($all2 - $all1) / 60"|bc ) minutes ($(echo "$all2 - $all1"|bc ) seconds) ${txtrst}"	

