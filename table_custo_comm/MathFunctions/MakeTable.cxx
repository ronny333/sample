// A simple program that computes the square root of a number
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "TutorialConfig.h"
#ifdef USE_MYMATH
#include "MathFunctions.h"
#endif
int main (int argc, char *argv[])
{
	double inputValue;
  if (argc < 2)
    {
    fprintf(stdout,"%s Version %d.%d\n",
            argv[0],
            Tutorial_VERSION_MAJOR,
            Tutorial_VERSION_MINOR);
    fprintf(stdout,"Usage: %s number\n",argv[0]);
    return 1;
    }
   printf("---arg is %f---\n",atof(argv[1]));
  if(atof(argv[1])<0)
	inputValue = 0;
  else
   inputValue = atof(argv[1]);

#ifdef USE_MYMATH
printf("Myyyy sqrt..\n");
  double outputValue = mysqrt(inputValue);
#else
printf("standard sqrt..\n");
  double outputValue = sqrt(inputValue);
#endif
 
  fprintf(stdout,"The square root of %g is %g\n",
          inputValue, outputValue);
  return 0;
}
