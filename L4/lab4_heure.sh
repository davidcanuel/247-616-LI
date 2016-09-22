#!/bin/bash
if [[ "$#" == 1 ]]; 
then
	echo use "$1"
	/usr/sbin/ntpdate "$1"
else
	echo use pool.ntp.org
	/usr/sbin/ntpdate pool.ntp.org
fi
date