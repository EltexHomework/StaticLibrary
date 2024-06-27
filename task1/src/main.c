#include <stdio.h>
#include "main.h"

void menu();

void print_options();

int read_option();

int call_function_by_option(int option);

void flush_stdin();

void add_values(); 

void substract();

void multiply();

void divide();

int main(void) {
  menu();
  return 0;
}

void menu() {
  int option;
  while (1) {
    print_options();
    option = read_option();
    
    int result = call_function_by_option(option);

    if (result == -1) {
      return;
    }
    if (result == -2) {
      printf("Wrong option\n\n");
    }
  }
}

void print_options() {
  printf("___MENU___\n");
  printf("1) Add\n");
  printf("2) Substract\n");
  printf("3) Multiply\n");
  printf("4) Divide\n");
  printf("5) Exit\n");
}

int read_option() {
  int option;
  
  printf("Enter option: ");
  if (scanf("%d", &option) == 0 || option < 1 || option > 5) {
    return -1;
  } 
  flush_stdin();  
  return option;
}

int call_function_by_option(int option) {
  switch (option) {
    case 1:
      add_values();
      return 0;
    case 2:
      substract();
      return 0;
    case 3:
      multiply();
      return 0;
    case 4:
      divide();
      return 0;
    case 5:
      return -1; 
    default:
      return -2;
  }
}

void flush_stdin() {
  int c;
  while ((c = getchar()) != '\n' && c != EOF);
}

void add_values() {
  int a, b, result;
  
  while (1) {
    printf("Enter first number: ");
    if (scanf("%d", &a) != 0) {
      break;
    } else {
      printf("Wrong number\n"); 
    }
  }
  
  while (1) {
    printf("Enter second number: ");
    if (scanf("%d", &b) != 0) {
      break;
    } else {
      printf("Wrong number\n"); 
    }
  }  
  result = add(a, b);
  printf("Result of sum: %d\n", result);
  printf("\n");
}

void substract() {
  int a, b, result;
  
  while (1) {
    printf("Enter first number: ");
    if (scanf("%d", &a) != 0) {
      break;
    } else {
      printf("Wrong number\n"); 
    }
  }
  
  while (1) {
    printf("Enter second number: ");
    if (scanf("%d", &b) != 0) {
      break;
    } else {
      printf("Wrong number\n"); 
    }
  }  
  result = sub(a, b);
  printf("Result substraction: %d\n", result);
  printf("\n");
}

void multiply() {
  int a, b, result;
  
  while (1) {
    printf("Enter first number: ");
    if (scanf("%d", &a) != 0) {
      break;
    } else {
      printf("Wrong number\n"); 
    }
  }
  
  while (1) {
    printf("Enter second number: ");
    if (scanf("%d", &b) != 0) {
      break;
    } else {
      printf("Wrong number\n"); 
    }
  }  
  result = mul(a, b);
  printf("Result of multiplication: %d\n", result);
  printf("\n");
}

void divide() {
  int a, b, result;
  
  while (1) {
    printf("Enter first number: ");
    if (scanf("%d", &a) != 0) {
      break;
    } else {
      printf("Wrong number\n"); 
    }
  }
  
  while (1) {
    printf("Enter second number: ");
    if (scanf("%d", &b) != 0) {
      break;
    } else {
      printf("Wrong number\n"); 
    }
  }
  
  result = div(a, b);
  printf("Result if division: %d\n", result);
  printf("\n");
}

