#include<stdio.h>
main()
{
int i,j,k,t,s=0;
int a[4];
printf("Enter the no");
for(i=0;i<4;i++)
scanf("%d",&a[i]);

for(i=0;i<4;i++)
{ s=0;
for(j=0;j<4-i-1;j++)
{
if(a[j]>a[j+1])
{
t=a[j];
a[j]=a[j+1];
a[j+1]=t;
s=1;
}

}

if(s==0)
break;
}
for(k=0;k<4;k++)
printf("%d\t",a[k]);
}
