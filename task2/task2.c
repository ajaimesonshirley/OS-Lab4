#include <stdio.h>
#include <stdlib.h>

/* IMPLEMENT ME: Declare your functions here */
int add (int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);

typedef int (*Operation)(int, int);

int main ()
{
  //pre-defined integers
	int num1 = 4;
  int num2 = 2;
  char input;

  //array of function pointers
  Operation operations[4] = {add, subtract, multiply, divide};

  do{
    printf("Choose an operation:\n");
    printf("0 - Add\n");
    printf("1 - Subtract\n");
    printf("2 - Multiply\n");
    printf("3 - Divide\n");
    printf("4 - Exit\n");
    scanf("%c", &input); 

    //consume the newline character in the input buffer
    while (getchar() != '\n');

    //convert the character to an integer
    int operation = input - '0';

    //check if the input is valid
    operation = (operation >= 0 && operation <= 4) ? operation : 0;

    printf("Result: %d\n", operations[operation](num1, num2));    
    
  } while (input != '4');

	return 0;
}

/* IMPLEMENT ME: Define your functions here */
int add (int a, int b) { 
  printf ("Adding 'a' and 'b'\n"); 
  return a + b; 
}

int subtract (int a, int b) { 
  printf ("Subtracting 'b' from 'a'\n"); 
  return a - b; 
}

int multiply (int a, int b) { 
  printf ("Multiplying 'a' and 'b'\n"); 
  return a * b; 
}

int divide (int a, int b) { 
  printf ("Dividing 'a' by 'b'\n"); 
  return a / b; 
}


