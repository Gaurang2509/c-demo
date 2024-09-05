#include "stdio.h"
#include "stdlib.h"
#define size 5
int arr[size];

void insert()
{
	int i;
	for(i=0;i<size;i++)
	{
		printf("Enter Element at %d of Array :",i);
		scanf("%d",&arr[i]);
	}
}
void view()
{
	int i;
	for(i=0;i<size;i++)
	{
		printf("%d\t",arr[i]);
	}
}
void search()
{
	int ele,i,n;
	printf("Enter no. to search : ");
	scanf("%d",&ele);
	for(i=0;i<size;i++)
	{
		n = arr[i];
		if( printf("%d",arr[i]) == ele)
		{
			printf("Yess ! \n %d found at %d in Array ",arr[i],i);
		}
		else
		{
			printf("Can't found searched element ! ");
			break;
		}
	}
}
void main()
{
	int ch;
	while(1)
	{
		printf("\nProgram of Array ! ");
		printf("\n1.Insert\n2.View\n3.Search\n4.Sorting\n5.Delete\n6.Exit");
		printf("Enter your choice : ");
		scanf("%d",&ch);
		switch(ch)
		{
		case 1:
			insert();
			break;
		case 2:
			view();
			break;
		case 3:
			search();
			break;
		}
	}
}
