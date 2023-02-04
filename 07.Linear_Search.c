#include<stdio.h>
#include<conio.h>
int main(){
	 int i,n,flag=0,c=1,key;
	 
	 printf("enter the no of elements in the array:");
	 scanf("%d",&n);
	 int a[n];
	 printf("enter the array elements:");
	 for(i=0;i<n;i++){
	 	scanf("%d",&a[i]);
	 }
	 printf("enter the key value:");
	 scanf("%d",&key);
	 for(i=0;i<n;i++){
	 	if(a[i]==key){
	 	   flag=1;
	 	   c=i+1;}
	 }
	 if(flag==1)
	    printf("the elements is present in %d th position in the array",c);
	 else
	    printf("the element is not found in the array");
	    return 0;
}
