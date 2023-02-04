#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,j,temp;
	printf("enter the no of elements in the array:");
	scanf("%d",&n);
	int a[n];
	printf("enter the element of the array");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);}
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(a[i]<a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}	
	printf("the matrix elements are:");
	for(i=0;i<n;i++){
		printf(" %d ",a[i]);}
	
}
