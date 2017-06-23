#include<stdio.h>
int main()
{
int array[7]={4,23,43,38,15,10,30};
int i,j,temp;
for(i=0;i<7;i++)
{
      temp=array[i];
      j=i-1;
      	while((temp<array[j])&&(j>=0))
	{
      		array[j+1]=array[j];
          	j=j-1;
        }
      array[j+1]=temp;
}

for(i=0;i<7;i++)
{
printf("%d\t",array[i]);
}
}
