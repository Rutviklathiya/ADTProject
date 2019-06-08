#include<stdio.h>
#include<conio.h>

int main()
{   int a[]={10,11,22,33,44,55,66,77,88,99};
    int z;
    printf("\nEnter the element you have to find");
    scanf("%d",&z);
    binarysearch(a,10,z);
    getch();
}
void binarysearch(int y[],int n,int k)
{
    int m,l,u;
    l=0;
    u=n-1;
    while(l<=u)
    {
         m=(l+u)/2;
         if(y[m]>k)
         u=m-1;
         else if(y[m]<k)
            l=m+1;
         else
         {
         printf("\n The element is found at index %d",m);
         return;
         }
    }
    printf("\n Searching unsuccessful");
}

