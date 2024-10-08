/* Mesataren e disa numrave*/
#include<stdio.h>
#include<conio.h>
int main(void)
{
int i,n;
float Mes,x,s=0;
printf("\nJepni numrin n:\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Jepni numrin:\n");
scanf("%f",&x);
s=s+x;
}
Mes = s/n;
printf("Mesatarja e %d numrave eshte %f.",n,Mes);
getch();
}
