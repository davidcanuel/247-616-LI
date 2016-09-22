#! /bin/bash

DEL_PATH="/sys/class/leds/beaglebone:green:usr"

case "$#" in
	0) echo "Lab5DEL [led] [mode] [delay on] [delay off]" 
	   exit;;
	1)   ;;
	2)   ;;
	3)   ;;
	4)   ;;
	*) exit ;;
esac

case "$2" in
	"clignoter") 
	   echo "none" >> $DEL_PATH"$1/trigger"
	   echo "timer" >> $DEL_PATH"$1/trigger" 
	   echo "$3" > $DEL_PATH"$1/delay_on"
	   echo "$4" > $DEL_PATH"$1/delay_off" ;;
	"fermer")
	   echo "none" >> $DEL_PATH"$1/trigger"
	   echo "0" >> $DEL_PATH"$1/brightness" ;;
	"allumer")
	   echo "none" >> $DEL_PATH"$1/trigger"
	   echo "1" >> $DEL_PATH"$1/brightness" ;;
	"battement")
	   echo "none" >> $DEL_PATH"$1/trigger"
	   echo "heartbeat"  >> $DEL_PATH"$1/trigger"  ;;
	"statut") more $DEL_PATH"$1/trigger" ;;
	"retour")
	   echo "none" >> $DEL_PATH"$1/trigger"
	   case "$1" in
		   0) echo "heartbeat" >> $DEL_PATH"$1/trigger" ;;
		   1) echo "mmc0" >> $DEL_PATH"$1/trigger" ;;
		   2) echo "cpu0" >> $DEL_PATH"$1/trigger" ;;
		   3) echo "mmc1" >> $DEL_PATH"$1/trigger" ;;
		esac;;
	*) echo "INVALID NUMBER!" ;;
esac
