#include<stdio.h>
int main()
{
	int a[5], i, j,temp;
	printf("Enter 5 numbers");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("Sorted array=  ");
	for(i=0;i<5;i++)
	{
		printf("\t%d",a[i]);
	}
}
