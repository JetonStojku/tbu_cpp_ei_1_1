/* minimumi i 2 nr a dhe b*/
#include<stdio.h>
#include<conio.h>
int main(void)
{
int a,b,min;
printf("\nJepni numrin a:\n");
scanf("%d",&a);
printf("Jepni numrin b:\n");
scanf("%d",&b);

if (a<b)
min = a;
else 
min =b;

printf("Minimumi i 2 numrave %d dhe %d eshte %d.",a,b,min);
getch();
}
