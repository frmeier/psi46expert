#include "BasePixel/Keithley.h"
#include <time.h>
#include <stdio.h>
#include <iostream.h>




int main(int argc, char* argv[]) {
  
  Keithley k;
  k.Open();
  k.Init();
  k.GoLocal();
	
  return 0;
}