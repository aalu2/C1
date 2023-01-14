
#include <stdio.h>

int
main ()
{
  float sub1, sub2, sub3, sub4, sub5, total, percentage;	// Declaring the variables for marks and percentage
  int total_marks;		// Declaring variable for total marks
  sub1 = 60, sub2 = 55, sub3 = 60, sub4 = 65, sub5 = 60;	// Initializing the marks of each subject
  total_marks = 500;		// Initializing the total marks
  /* Calculate total and percentage */
  total = sub1 + sub2 + sub3 + sub4 + sub5;	// Calculating total marks here
  percentage = (total / total_marks) * 100;	// Calculating the percentage

  // Now Printing total and percentage //
  printf ("sum=%.2f\n", total);	// Print total marks
  printf ("percentage=%.3f", percentage);	// Print percentage

  return 0;
}
