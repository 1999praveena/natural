#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c;
int largest;
printf("enter values:");
scanf("%d%d%d",&a,&b,&c);
if(a>b&&a>c)
largest=a;
else if(b>a&&b>c)
largest=b;
else
largest=c;
printf("large is %d",largest);
getch();
return 0;
}
