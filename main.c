/*
*   CODING CHALLENGE #2
*   Filename: main.c
*   This file measures a person's blood pressure readings and reports their category.
*   Last modified by: Angel F. Garcia (9/19/2020)
*   
*   Check the // TODO comments to see what is missing and needs to be completed.
*/

#include <stdio.h>

int main(void) {
  int s, d;

  scanf("%d %d", &s, &d);                   // Read Systolic and Diastolic pressure

  if(s < d) {
    printf("Error");
  }
  else if( (s < 120) && (d < 80) ) {
    printf("Normal");
  }
  else if( (s < 130) && (d < 80) ) {
   printf("Elevated");
  }
  else if( (s < 140) || (d < 90)) {  
    printf("Stage 1\nHypertension");
  }
  else if( (s > 180) || (d > 120)) {        // If we put Stage 2 first the program wouldn't know when s > 180 because it would execute at s > 140 without trying the 180.
    printf("Hypertensive\nCrysis");
  }
  else if( (s >= 140) || (d >= 90)) {       // Equal signs are added after > so we can avoid the possible error of s = 140 and d = 90.
    printf("Stage 2\nHypertension");
  }
  else {
    printf("Missing case");
  }
}
