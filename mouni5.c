#include<stdio.h>
#include<sort.h>
int swap(int array[],int i,int j)
{
int temp;
temp=array[i];
array[i]=array[j];
array[j]=temp;
return 0;
}

