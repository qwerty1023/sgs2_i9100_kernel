#!/sbin/sh

MODEM_PATH=`cat /etc/recovery.fstab | grep -v "#" | grep /modem | awk '{print $3}'`;

echo "">>"$2"/clockworkmod/.modem_bak/log.txt;
echo "Flashear modem $1 a $MODEM_PATH">>"$2"/clockworkmod/.modem_bak/log.txt;
(cat "$1" > "$MODEM_PATH") 2>> "$2"/clockworkmod/.modem_bak/log.txt;

if [ $? = 0 ];
     then echo "Exito!">>"$2"/clockworkmod/.modem_bak/log.txt
     else echo "Error!">>"$2"/clockworkmod/.modem_bak/log.txt
fi;