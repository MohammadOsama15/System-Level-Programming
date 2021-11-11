#include<stdio.h>

int main(){
char phone[13];
printf("Enter phone number [(999)999-9999]:");
scanf("%s",phone);
char input[12];
int i;
for(i=1;i<13;i++){
if(i==4){ 
input[i-1] = '-';
}
else{
input[i-1] = phone[i];
}
}
input[i-1] = '\0';
printf("You entered %s\n",input);
return 0;
}
