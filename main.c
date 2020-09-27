/*
*   CODING CHALLENGE #2
*   Filename: main.c
*   This file measures a person's blood pressure readings and reports their category.
*   Last modified by: Robert Alvarez (9/27/2020)
*   
*   Check the // TODO comments to see what is missing and needs to be completed.
*/

#include <stdio.h>

int main(void) {
  int s, d;

  scanf("%d %d", &s, &d);                   // Read Systolic and Diastolic pressure

  if(s < d) {
    printf("ERROR");                        // Error go first so we don't have to evaluate an impossible scenario risking to output a fall statement.
  }
  else if( (s < 120) && (d < 80) ) {
    printf("Normal");
  }
  else if( (s < 130) && (d < 80) ) {
   printf("Elevated");
  }
  else if( (s >= 180) || (d >= 120)) {      /* We start from top to bottom because we are looking for s or d grater than or queal than a specific number. If the number is not
                                               big enought we go to a lower number to see if it fall on the next calification. 
                                               This is made so we don't have to specified ranges of evaluation on every if-else statemnt.*/
    printf("Hypertensive Crysis");
  }
  else if( (s >= 140) || (d >= 90)) {       // Equal signs are added after > so we can avoid the possible error of s = 140 and d = 90.
    printf("Stage 2 Hypertension");
  }
  else if( (s < 140) || (d < 90)) {  
    printf("Stage 1 Hypertension");
  }
}
