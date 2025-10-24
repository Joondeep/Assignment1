#include<stdio.h>
int main(){
    int a,b,choice;
    printf("ENTER a:");
    scanf("%d",&a);
    printf("ENTER b:");
    scanf("%d",&b);
    printf("enter the number between 1 and 4:");
    scanf("%d",&choice);
    switch(choice){
       case 1:
       printf("sum is %d",a+b);
        break;
       case 2:
       printf("subtracted value is %d",a-b);
       break;
       case 3:
       printf("division value is %d",a/b);
       break;
       case 4:
       printf("multiplicated value is %d",a*b);
       break;
       default:
       printf("error");
    }
    return 0;



}