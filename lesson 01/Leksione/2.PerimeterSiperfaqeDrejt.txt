/*Gjej P dhe S te drejtekendeshit me brinje x,y*/
#include<stdio.h>
#include<conio.h>
int main(void)
{
int x,y,P,S;
printf("Ju lutemijepni brinjet:\n");
scanf("%d %d",&x,&y);
P=2*(x+y);
S = x*y;

printf("Perimetri eshte %d : \n",P);
printf("Siperfaqja eshte %d : \n",S);

getch();
}
