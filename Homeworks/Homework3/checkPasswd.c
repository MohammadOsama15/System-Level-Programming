#include<stdio.h>
#include <string.h>

// main

 int main() {

// declare variables.

 char ch[10];

 int len,pnt,new_len;
// input password

 printf("Enter a password : ");

 scanf("%s", ch);

 len=strlen(ch);

// check condition

 if(len!=10)

 {

 new_len=10-len;

 pnt=5*new_len;

// check condition

 if(pnt>30)

 {

// display values

printf("Deductions: %d \nThe password is unsafe! Please reset. \n", pnt);

}

 else{

// display values

 printf("The password is safe. \n");

 }

 }

else{

// display values
 printf("The password is safe.");

 }

 return 0;

 }
