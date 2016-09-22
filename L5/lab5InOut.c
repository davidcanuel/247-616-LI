#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void pauseEnSecondes(int seconde)
{
  time_t debut, maintenant;
  debut = time(NULL);
  maintenant = time(NULL);
  while ((maintenant - debut < (double)seconde))
  {
    maintenant = time(NULL);
  }
}

int main()
{
	FILE *fileTrigger;
	FILE *fileBrightness;
	
	FILE *fileIn;
	
	FILE *fileOut;
	
	fileTrigger = fopen("/sys/class/leds/beaglebone:green:usr0/trigger", "w" );
	fileBrightness = fopen("/sys/class/leds/beaglebone:green:usr0/brightness", "w" );
	
	fileIn = fopen("/sys/class/gpio/gpio35", "r" );
	fileOut = fopen("/sys/class/gpio/gpio39", "w" );
	
	fseek(fileTrigger,0,SEEK_SET);
	fprintf(fileTrigger, "none");
	
	while(1)
	{
		pauseEnSecondes(1);
		fseek(fileOut,0,SEEK_SET);
		fprintf(fileOut, "1");
		
		
		pauseEnSecondes(1);
		fseek(fileOut,0,SEEK_SET);
		fprintf(fileOut, "0");
		
	}
  return 0;
}
