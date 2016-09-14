#!/bin/bash
if [[ "$#" == 1 ]]; 
then
	/usr/sbin/ntpdate "$1"
else
	/usr/sbin/ntpdate pool.ntp.org
fi