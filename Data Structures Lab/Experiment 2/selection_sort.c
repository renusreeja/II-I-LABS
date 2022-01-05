#include <stdio.h>
void selectionsort(int [], int);
int main(){
	int a[10],i,n;
	printf("Enter no.of array elements:");
	scanf("%d",&n);
	printf("Enter the array elements:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	selectionsort(a,n);
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	return 0;
}
void selectionsort(int a[], int n){
	int i,j,t,min;
	for(i=0;i<n-1;i++){
		min = i;
		for(j=i+1;j<n;j++){
			if(a[j]<a[min]){
				min = j;
			}
		}
				t = a[i];
				a[i] = a[min];
				a[min] = t;
		
	}

}

