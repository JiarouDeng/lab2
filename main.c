// Author: Jiarou Deng dpj5243@psu.edu
// Collaborator:Max Simpson mes6581@psu.edu
// Collaborator: Alessandro Prieto Bustamante asp5586@psu.edu
// Collaborator: Gabriel Charpentier gbc5202@psu.edu
// Section: 10
// Breakout: 10

#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>
int main(void) {
  char* g=readline("Enter your CMPSC 131 grade: ");
  float a= atof(g);
  float (l);
 if (a >= 93.0)
  {printf("Your letter grade for CMPSC 131 is A.");}
 else if (a >= 90.0)
  {printf("Your letter grade for CMPSC 131 is A-.");}
 else if (a >= 87.0)
  {printf("Your letter grade for CMPSC 131 is B+.");}
 else if (a >= 83.0)
  {printf("Your letter grade for CMPSC 131 is B.");}
 else if (a >= 80.0)
  {printf("Your letter grade for CMPSC 131 is B-.");}
 else if (a >= 77.0)
  {printf("Your letter grade for CMPSC 131 is C+.");}
 else if (a >= 70.0)
  {printf("Your letter grade for CMPSC 131 is C.");}
 else if (a >= 60.0)
  {printf("Your letter grade for CMPSC 131 is D.");}
 else if (a < 60.0)
  {printf("Your letter grade for CMPSC 131 is F.");}
  
  return 0;
}