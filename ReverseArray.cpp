/*Given an array (or string), the task is to reverse the array/string.
Examples : 
 

Input  : arr[] = {1, 2, 3}
Output : arr[] = {3, 2, 1}

Input :  arr[] = {4, 5, 1, 2}
Output : arr[] = {2, 1, 5, 4}

*/#include<iostream>
using namespace std;

void reverseArray(int arr[],int n){
	int start=0;
	int end=n-1;
	int temp=0;
	while(start<=end){
		 temp=arr[start];
		 arr[start]=arr[end];
		 arr[end]=temp;
		 start++;
		 end--;
	}
}

void printArray(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
		
	}
}
int main()
{
	int n;
	cout<<"Enter size of array: ";
	cin>>n;
	cout<<endl;
	int arr[n];
	cout<<"Enter elements of array: "<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<endl;
	reverseArray(arr,n);
	cout<<"Final reversed array is"<<endl;
	printArray(arr,n);
	return 0;
	
	
	
}
