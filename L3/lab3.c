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
// get device info from linux by usb
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


int main (int argc, char *argv)
{
  
  libusb_device                    **devices = NULL;
  libusb_device                    *device = NULL;
  libusb_device_handle             *handle = NULL;
  struct libusb_device_descriptor  descriptor;
  
  unsigned char                    string[256];
  ssize_t                          nbUsb = 0;
  ssize_t                          i = 0;
  
  libusb_init(NULL);
  nbUsb = libusb_get_device_list(NULL, &devices);
  
   printf ("nb Device %d\n", nbUsb);
  
  while (i < nbUsb)
  {
    printf ("Device %d\n", i+1);
    
    device = devices[i];
    libusb_open(device, &handle);
    libusb_get_device_descriptor(device, &descriptor);
    
    printf("iManufacturer = %d\n", descriptor.iManufacturer);
    if (descriptor.iManufacturer > 0)
    {
      libusb_get_string_descriptor_ascii(handle, descriptor.iManufacturer, string, 256);
      if(string != NULL)
      {
        printf("string = %s\n",  string);
      }
    }
    
    printf("iProduct = %d\n", descriptor.iProduct);
    if (descriptor.iProduct > 0)
    {
      libusb_get_string_descriptor_ascii(handle, descriptor.iProduct, string, 256);
      if(string != NULL)
      {
        printf("string = %s\n",  string);
      }
    }
    
    printf("iSerialNumber = %d\n", descriptor.iSerialNumber);
    if (descriptor.iSerialNumber > 0)
    {
      libusb_get_string_descriptor_ascii(handle, descriptor.iSerialNumber, string, 256);
      if(string != NULL)
      {
        printf("string = %s\n",  string);
      }
    }
    
    printf("bDescriptorType = %d\n", descriptor.bDescriptorType);
    if (descriptor.bDescriptorType > 0)
    {
      libusb_get_string_descriptor_ascii(handle, descriptor.bDescriptorType, string, 256);
      if(string != NULL)
      {
        printf("string = %s\n",  string);
      }
    }
    
    printf("bDeviceClass = %d\n", descriptor.bDeviceClass);
    if (descriptor.bDeviceClass > 0)
    {
      libusb_get_string_descriptor_ascii(handle, descriptor.bDeviceClass, string, 256);
      if(string != NULL)
      {
        printf("string = %s\n",  string);
      }
    }
    
    printf("bDeviceProtocol = %d\n", descriptor.bDeviceProtocol);
    if (descriptor.bDeviceProtocol > 0)
    {
      libusb_get_string_descriptor_ascii(handle, descriptor.bDeviceProtocol, string, 256);
      if(string != NULL)
      {
        printf("string = %s\n",  string);
      }
    }
    
    printf("bDeviceSubClass = %d\n", descriptor.bDeviceSubClass);
    if (descriptor.bDeviceSubClass > 0)
    {
      libusb_get_string_descriptor_ascii(handle, descriptor.bDeviceSubClass, string, 256);
      if(string != NULL)
      {
        printf("string = %s\n",  string);
      }
    }
    
    printf("idProduct = %d\n", descriptor.idProduct);
    if (descriptor.idProduct > 0)
    {
      libusb_get_string_descriptor_ascii(handle, descriptor.idProduct, string, 256);
      if(string != NULL)
      {
        printf("string = %s\n",  string);
      }
    }
    
    printf("idVendor = %d\n", descriptor.idVendor);
    if (descriptor.idVendor > 0)
    {
      libusb_get_string_descriptor_ascii(handle, descriptor.idVendor, string, 256);
      if(string != NULL)
      {
        printf("string = %s\n",  string);
      }
    }
    
    printf("bcdDevice = %d\n", descriptor.bcdDevice);
    if (descriptor.bcdDevice > 0)
    {
      libusb_get_string_descriptor_ascii(handle, descriptor.bcdDevice, string, 256);
      if(string != NULL)
      {
        printf("string = %s\n",  string);
      }
    }
    
    printf("bcdUSB = %d\n", descriptor.bcdUSB);
    if (descriptor.bcdUSB > 0)
    {
      libusb_get_string_descriptor_ascii(handle, descriptor.bcdUSB, string, 256);
      if(string != NULL)
      {
        printf("string = %s\n",  string);
      }
    }
    
    printf("bNumConfigurations = %d\n", descriptor.bNumConfigurations);
    if (descriptor.bNumConfigurations > 0)
    {
      libusb_get_string_descriptor_ascii(handle, descriptor.bNumConfigurations, string, 256);
      if(string != NULL)
      {
        printf("string = %s\n",  string);
      }
    }
    
    printf("bMaxPacketSize = %d\n", descriptor.bMaxPacketSize0);
    if (descriptor.bMaxPacketSize0 > 0)
    {
      libusb_get_string_descriptor_ascii(handle, descriptor.bMaxPacketSize0, string, 256);
      if(string != NULL)
      {
        printf("string = %s\n",  string);
      }
    }
    
    printf("bLength = %d\n", descriptor.bLength);
    if (descriptor.bLength > 0)
    {
      libusb_get_string_descriptor_ascii(handle, descriptor.bLength, string, 256);
      if(string != NULL)
      {
        printf("string = %s\n",  string);
      }
    }
    
    libusb_close(handle);
    handle = NULL;
    i++;
  }
  
  if (handle != NULL)
  {
    libusb_close(handle);
  } 
  
  libusb_exit(NULL);
  
  return 0;

}