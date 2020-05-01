//Question: Write a C Program to convert the input numbers to the words.

//Solution:
#include<stdio.h>
main()
{
int number_entered,r,sum=0;
printf("Enter the Number you want to reverse\n");
scanf("%d", &number_entered);
{
while (number_entered!=0)
{
r=number_entered%10;
sum=sum*10+r;
number_entered=number_entered/10;

switch(r=r%10){
case 0:
printf("Zero"); break;
case 1:
printf("One");break;
case 2:
printf("Two"); break;
case 3:
printf("Three"); break;
case 4:
printf("Four"); break;
case 5:
printf("Five"); break;
case 6:
printf("Six"); break;
case 7:
printf("Seven"); break;
case 8:
printf("Eight"); break;
case 9:
printf("Nine"); break;
}
}number_entered=number_entered/10;
}
}


