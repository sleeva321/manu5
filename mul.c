#include<stdio.h>
#include<conio.h>
void main()
{
                int x,i,mul;
                clrscr();
                
                scanf("%d",&x);
                for(i=1;i<=5;i++)
                {
                    mul=x*i;
                               printf(" %d",mul);
                 }
                 getch();
}
