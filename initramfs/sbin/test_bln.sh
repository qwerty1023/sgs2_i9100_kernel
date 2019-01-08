#!/sbin/sh
(
SLEEPING=`cat /sys/power/wait_for_fb_sleep`
if [ "$SLEEPING" = "sleeping" ]; then
sleep 1
echo "1" > /sys/class/misc/notification/led
fi
)
