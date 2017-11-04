#include<stdio.h>
#include<stdlib.h>
void Merge(int*,int*,int,int*,int);
void  MergeSort(int*Arr,int n)
{
    if(n<2)
        return;
    int mid,*L,*R,i,j;
     mid=n/2;
    L=(int*)malloc(mid*sizeof(int));
    R=(int*)malloc((n-mid)*sizeof(int));

    for(i=0;i<mid;i++)
        *(L+i)=*(Arr+i);

    for(j=mid;j<n;j++)
        *(R+j-mid)=*(Arr+j);

    MergeSort(L,mid);
    MergeSort(R,(n-mid));

    Merge(Arr,L,mid,R,(n-mid));

    free(L);
    free(R);
}

void Merge(int*an,int*l,int lsize,int*r,int rsize)
{
    int i=0,j=0,k=0;
    while(i<lsize &&j<rsize)
    {if(*(l+i)<*(r+j))
        {*(an+k)=*(l+i);
           i++;
        }

    else
    {*(an+k)=*(r+j);
        j++;
    }

    k++;
    }

        while(i<lsize)
    {
        *(an+k)=*(l+i);
        k++;
        i++;
    }
    while (j<rsize)
    {
        *(an+k)=*(r+j);
        k++;
        j++;
    }


}

int main()
{
    int i;
    int a[]={2,9,21,45,4,1,6,7};
    MergeSort(a,8);

    for(i=0;i<8;i++)
        printf("%d",a[i]);



}
