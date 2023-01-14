#include<stdio.h>
#include<math.h>

int main() {
  // Declaring a float variable for the radius with a value of 5
  float radius = 5;

  // Declaring a float variables for the area and circumference
  float area, circumference;

  // Calculating the area of the circle using the formula pi * radius^2
  area = 3.14 * radius * radius;
  
  // Calculate the circumference of the circle using the formula 2 * pi * radius
  circumference = 2 * 3.14 * radius;
  
  // Print the area and circumference of the circle to the console
  printf("Area of the circle = %f\n", area);
  printf("Circumference of the circle = %f\n", circumference);
  
  return 0;
}

