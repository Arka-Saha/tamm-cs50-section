/*
* A simple program for demonstrating how functions work
*
* By: Timothy Tamm
*/

// edit proposed by Arka Saha

#include <stdio.h>

void print_name_age(char name[], int age);
char name[]="";
int age;

int main(void)
{
   printf("What's your name?\n");
   scanf("%[^\n]s", &name);
   
   printf("How old are you?\n");
   scanf("%d", &age);
   print_name_age(name, age);
}

void print_name_age(char name[], int age)
{
   printf("%s is %d years old!\n", name, age);
}
