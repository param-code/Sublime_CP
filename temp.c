#include <stdio.h>
int linear_search(int arr[],int target,int size){
	for(int i = 0;i < size;i++){
		if(arr[i] == target)return i;
	}
	return -1;
}

int binary_search(int arr[],int target,int size){
	int start = 0;
	int end = size-1;
	int mid;
	while(start < end){
		mid = (start + (end - start)) / 2;
		if(arr[mid] == target)return mid;
		else if(arr[mid] < target)end = mid - 1;
		else start = mid + 1;
	}
	return -1;
}
int main(){
	int n;
	printf("Enter the size of the array\n");
	scanf("%d",&n);
	int nums[n];
	printf("Enter the elements of the array\n");
	for(int i = 0;i < n;i++){
		scanf("%d",&nums[i]);
	}
	int target;
	printf("Enter the number to be searched\n");
	scanf("%d",&target);
	int res = linear_search(nums,target,n);
	printf("%d",res);
	return 0;
}