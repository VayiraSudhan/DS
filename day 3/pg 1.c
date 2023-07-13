#include<stdio.h.
int main()
{
lastdigit();
}
void lastdigit(){
int a;
printf("enter the number");
scanf("%d",&a);
int lastdigit = a%10;
printf("lastdigit of number %d:%d",a,lastdigit);
}
