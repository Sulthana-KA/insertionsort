#include<stdio.h>
int i,j,temp;
int read(int *array)
{
int n;
printf("enter the no of terms");
scanf("%d",&n);
printf("enter the terms");
for(i=0;i<n;i++)
{
scanf("%d",&array[i]);
}
return n;
}
int sort(int *array,int n)
{
for(i=0;i<n;i++)
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
return 0;

}
int main()
{
int array[100];
int size=read(array);
sort(array,size);

for(i=0;i<size;i++)
{
printf("%d\t",array[i]);
}
}
