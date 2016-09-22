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
	
	fileTrigger = fopen("/sys/class/leds/beaglebone:green:usr0/trigger", "w" );
	fileBrightness = fopen("/sys/class/leds/beaglebone:green:usr0/brightness", "w" );
	
	fseek(fileTrigger,0,SEEK_SET);
	fprintf(fileTrigger, "none");
	
	while(1)
	{
		fseek(fileBrightness,0,SEEK_SET);
		fprintf(fileBrightness, "1");
		pauseEnSecondes(2);
		
		fseek(fileBrightness,0,SEEK_SET);
		fprintf(fileBrightness, "0");
		pauseEnSecondes(1);
	}
  return 0;
}

