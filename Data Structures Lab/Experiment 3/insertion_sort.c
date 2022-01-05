#include <stdio.h>
void insertionsort(int [], int);
int main(){
        int a[10],i,n;
        printf("Enter no.of array elements:");
        scanf("%d",&n);
        printf("Enter the array elements:");
        for(i=0;i<n;i++){
                scanf("%d",&a[i]);
        }
       insertionsort(a,n);
        for(i=0;i<n;i++){
                printf("%d ",a[i]);
        }
        return 0;
}
void insertionsort(int a[], int n){
	int i,j,index;
	for(i=1;i<n;i++){
		index = a[i];
		j = i;
		while((j>0) && (a[j-1]>index)){
			a[j] = a[j-1];
			j = j - 1;
		}
		a[j] = index;
	}
}






