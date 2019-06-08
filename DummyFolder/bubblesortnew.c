#include<stdio.h>
#include<conio.h>


void main()
{
    int a[]={10,90,50,20,30,70,80,60,40,100};
    int b,i;
    bubblesort(a,10);
    getch();
}
void bubblesort(int x[],int n)
 {
     int temp,round,z;
     for(round=1;round<=n-1;round++)
     for(z=0;z<10;z++)
     {   if(x[z]>x[z+1]){
         temp=x[z];
         x[z]=x[z+1];
         x[z+1]=temp;
     }
     }
     for(z=0;z<10;z++)
     printf("\n %d",x[z]);
 }
