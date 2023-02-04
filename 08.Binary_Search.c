#include<stdio.h>
#include<conio.h>
int main(){
	 int i,n,flag=0,c=1,key,s,l,mid;
	 
	 printf("enter the no of elements in the array:");
	 scanf("%d",&n);
	 int a[n];
	 printf("enter the array elements:");
	 for(i=0;i<n;i++){
	 	scanf("%d",&a[i]);
	 }
	s=0,l=n-1;
	 printf("enter the key value:");
	 scanf("%d",&key);
	 while(s<=l){
	 	mid=(s+l)/2;
	 	if(a[mid]==key){
	 		flag=1;
	 		break;
		 }
		 else if(a[mid]>key){
		 	l=mid-1;
		 }
		 else if(a[mid]<key){
		 	s=mid+1;
		 }
	 }
	 
	 if(flag==1)
	 printf("the element is present in %d th index:",mid);
	 else if(flag==0)
	 printf("the element is not found in the array");
	 return 0;
}
