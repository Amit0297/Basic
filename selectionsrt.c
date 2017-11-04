#include<stdio.h>
void sesort(int* a,int s)
{
int min,st,temp,p,i;
st=0;
while(st<s-1)
{
    min=*(a+st);
    p=st;
    for(i=st;i<s;i++)
        {
            if(*(a+i)<min)
            {min=*(a+i);
            p=i;
            }
            }

temp=*(a+st);
*(a+st)=min;
*(a+p)=temp;
st++;
}
}
main()
{
int a[9],i;
printf("Enter the elements");
for(i=0;i<9;i++)
scanf("%d",(a+i));

printf("Values before sort\n");
for(i=0;i<9;i++)
    printf(" %d ",*(a+i));

sesort(a,9);

printf("\nValues after sort\n ");
for(i=0;i<9;i++)
    printf(" %d ",*(a+i));



}
