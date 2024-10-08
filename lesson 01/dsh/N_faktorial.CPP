/*Gjej faktorialin e n-se*/
#include<stdio.h>
#include<conio.h>
int main(void)
{
int f=1,n,i;
printf("Fusni n:\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
f=f*i;
}
printf("Faktoriali i %d eshte %d.",n,f);
getch();
}

