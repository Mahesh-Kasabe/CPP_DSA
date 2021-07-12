#include <iostream>
using namespace std;

void swap(int a[], int i,int j){
	int temp = a[i];
	a[i] = a[j];
	a[j] = temp;

}

void partition(int a[], int i,int j){
 	int pivot = a[r];
	int i=l-1;

	for(int j=l;j<r;j++){
		if(a[j]<pivot){
			i++;
			swap(a,i,j);
			
		}

	}

}
void quicksort(int arr,int l , int r){
	if(l<r){
		int pi = partition(a[],l,r){
			
		quicksort(a[], l,pi-1);
		quicksort(a[], pi+1,r);

		}

	}

}
int main(){

	int n;
	cin>>n;

	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	for(int i=0;i<n;i++){
		cout<<a[i]<<endl;

	}

	return 0;
}
