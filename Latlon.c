#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>



struct Latlon
{
	
	double lat;
	double lon;
};
struct Latlon2
{
	double lat2;
	double lon2;
};
struct Latlon3
{
	double lat3;
	double lon3;
};

double main()
{
int end = 0;

	// FILE *fp;
	// fp = fopen("values.txt", "w");
	// fprintf(fp, "%s", "new lat and long");


	struct Latlon L1;
	{
		L1.lat = 37.57941251343841;
		L1.lon = -96.064453125;
	};

	struct Latlon2 l2;
	{
		l2.lat2 = 34.79576153473033;
		l2.lon2 = -96.064453125;
		
	
	};
	struct Latlon3 l3;
	{
		l3.lat3 = 35.08957427943165;
		l3.lon3 = -106.70711517333986;
	};

	while(end<=900){

    printf("1) The Latitude-Longitude: (%lf, %lf) \n ", L1.lat, L1.lon);Sleep(50);
    printf("2) The Latitude-Longitude: (%lf, %lf) \n ", l2.lat2, l2.lon2);Sleep(50);
	printf("3) The Latitude-Longitude: (%lf, %lf) \n ", l3.lat3, l3.lon3);Sleep(50);
end++;
	}

	return 0;
}
