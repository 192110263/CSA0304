#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,j,k,p,temp;
	printf("enter the no of elements in the array:");
	scanf("%d",&n);
	int a[n];
	printf("enter the element of the array");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);}
		
	printf("enter the element you want to insert:");
	scanf("%d",&k);
	printf("there are 0 to %d th index,so choose the index you want to insert:",n-1);
	scanf("%d",&p);
	for(i=n;i>=p;i--)
		a[i]=a[i-1];
		a[p]=k;
		
	printf("the matrix elements are:");
	for(i=0;i<=n;i++){
		printf(" %d ",a[i]);}
	
}
