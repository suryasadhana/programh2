#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a[5],i,j,temp;
for(i=0;i<5;i++);
{
scanf("%d",&a[i]);
}
for(i=0;i<5;i++)
{
for(j=0;j<5;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}}}
for(i=0;i<5;i++)
{
printf("%d",a[i]);
}
getch();
}
