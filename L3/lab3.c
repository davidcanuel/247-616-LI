// Copyright (c) david canuel - All Rights Reserved
// THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
// WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
// MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
// ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
// WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
// ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
// OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.

//**************************************************
// lab3.c
// get android device info from linux by usb
// 07/09/2016
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
