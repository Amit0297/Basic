#include<stdio.h>
#include<time.h>
#include<unistd.h>
void InsertionSort(int*a,int n)
{
int i,j;

for(i=1;i<n;i++)
{


for(j=i-1;j>=0;j--)
{
if(a[j+1]>=a[j])
break;

else
swap(&a[j+1],&a[j]);


}
}
}
void swap(int*p,int*n)
{
    int temp;
    temp=*p;
    *p=*n;
    *n=temp;

}
int main()
{
    clock_t t1,t2;
    t1=clock();
int i;
float j;
int a[]={1,5,11,7,13,5,4,2};
Sleep(1000);
InsertionSort(a,8);

for(i=0;i<8;i++)
printf(" %d ",a[i]);

t2=clock();
j=(float)(t2-t1)/CLOCKS_PER_SEC;
printf("\n%f",j);
}
