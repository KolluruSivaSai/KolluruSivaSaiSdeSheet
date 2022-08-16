/*
Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.

You must solve this problem without using the library's sort function.

 

Example 1:

Input: arr = [2,0,2,1,1,0]
Output: [0,0,1,1,2,2]
Example 2:

Input: arr = [2,0,1]
Output: [0,1,2]
*/#include<iostream>
using namespace std;


void sortArray(int *arr,int n){
	int low=0;
	int mid=0;
	int high=n-1;
	while(mid<=high){
		if(arr[mid]==0){
			swap(arr[mid],arr[low]);
			low++;
			mid++;
		}
		 else if(arr[mid]==1){
			mid++;
		}
		else{
			swap(arr[mid],arr[high]);
			high--;
		}
		
	}
}

void printArray(int *arr,int n)
{
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
int main(){
	
	int n;
	cout<<"enter size of the array: ";
	cin>>n;
	
	int *arr=new int[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	sortArray(arr,n);
	printArray(arr,n);
	
}
