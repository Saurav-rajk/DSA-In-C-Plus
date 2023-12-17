//Merge sort using c-plus

#include<iostream>
using namespace std;
int n;
void merge(int arr[], int beg, int mid,int last){
	int temp[n], tempi,left,right;
	tempi=beg;
	left=beg;
	right=mid+1;
	while(left<=mid && right<=last){// This loop is used for comparing the value and stored in temporary variable.
		if(arr[left] < arr[right]){
			temp[tempi]=arr[left];
			left=left+1;
		}else{
			temp[tempi]=arr[right];
			right=right+1;
		}
		tempi=tempi+1;
	}
	while(left<=mid){
		temp[tempi++]=arr[left++];
	}
	while(right<=last){
		temp[tempi++]=arr[right++];
	}
	for(int i=beg;i<=last;i++){
          arr[i]=temp[i];
	}
}

void mergesort(int arr[],int low,int high){
	int mid;
	if(low<high){                       // In this function we have use reccursive method .
		mid=low+(high-low)/2;
		mergesort(arr,low,mid);
		mergesort(arr,mid+1,high);
		merge(arr,low,mid,high);
	}
}
int main(){
	cout<<"Enter size of array-";
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	mergesort(arr,0,n-1);
	cout<<"Sorted array is-"<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}
