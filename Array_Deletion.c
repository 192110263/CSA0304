#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,j,p,temp;
	printf("enter the no of elements in the array:");
	scanf("%d",&n);
	int a[n];
	printf("enter the element of the array");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);}
	printf("there are 0 to %d th index,so choose the index you want to delete:",n-1);
	scanf("%d",&p);
	for(i=p;i<n;i++)
	    a[i]=a[i+1];
	printf("the matrix elements are:");
	for(i=0;i<n-1;i++){
		printf(" %d ",a[i]);}
	
}
