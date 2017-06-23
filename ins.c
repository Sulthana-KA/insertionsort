#include<stdio.h>
int array[20];
int i,j,temp,n;
int read()
{
printf("enter the no of terms");
scanf("%d",&n);
printf("enter the terms");
for(i=0;i<n;i++)
{
scanf("%d",&array[i]);
}
}
int sort(int *array)
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
read();
sort(array);

for(i=0;i<n;i++)
{
printf("%d\t",array[i]);
}
}
