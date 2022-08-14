/*
Maximum and minimum of an array using minimum number of comparisons

Write a C++ function to return minimum and maximum in an array. Your program should make the minimum number of comparisons. 

*/

#include<iostream>
#include<climits>
using namespace std;


struct Pair{
	int min=INT_MIN;
	int max=INT_MAX;
};

struct Pair minMaxusingComparisons(int arr[],int n){
	struct Pair minmax;
	int i;
	
	if(n%2==0){
		if(arr[0]>arr[1]){
			minmax.max=arr[0];
			minmax.min=arr[1];
		}
		else{
			minmax.max=arr[1];
			minmax.min=arr[0];
		}
		i=2;
	} 
	else{
		minmax.max=arr[0];
		minmax.min=arr[0];
		i=1;
	}
	
	while(i<n){
		if(arr[i]>arr[i+1]){
			if(arr[i]>minmax.max){
				minmax.max=arr[i];
			}
			if(arr[i+1]<minmax.min){
				minmax.min=arr[i+1];
			}
			
		}
		else{
			if(arr[i+1]>minmax.max){
				minmax.max=arr[i+1];
			}
			if(arr[i]<minmax.min){
				minmax.min=arr[i];
			}
		}
		i+=2;
	}
	return minmax;
	
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
	Pair minmax =minMaxusingComparisons(arr, n);
	cout<<"Minimum element of the array: "<<minmax.min<<endl;
	cout<<"Maximum element of the array: "<<minmax.max<<endl;
	
	
	return 0;
	
}
