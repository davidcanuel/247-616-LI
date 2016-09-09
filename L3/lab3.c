// Copyright (c) david canuel - All Rights Reserved

//**************************************************
// lab3
// get android device info from linux by usb
// David Canuel
//**************************************************

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <libusb-1.0/libusb.h>
#include <usb.h>
#include <string.h>
#include <unistd.h>

#define IN 0x85
#define OUT 0x07

#define VID 0x18D1
#define PID 0x4E22

#define ACCESSORY_PID 0x2D01
#define ACCESSORY_PID_ALT 0x2D00

#define LEN 2


int main (int argc, char *argv)
{

}
