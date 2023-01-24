#include<Stdio.h>
int main(){
	int i,n,a[100],b;
	printf("enter size:");
	scanf("%d",&n);
	printf("enter elements:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("enter the num to be searched:");
	scanf("%d",&b);
	for(i=0;i<n;i++){
		if(a[i]==b){
			printf("the element is at %d position",i);
		}
	}
}
