#include<bits/stdc++.h>
using namespace std;


int binarySearch(int arr[],int n,int x)
{
	int start=0;
	int end=n-1;
	while(start<=end)
	{
		int mid=start+((end-start)/2);
		
		if(x==arr[mid])
			return mid;
		if(x>arr[mid])
			start=mid+1;
		else{
				end=mid-1;
			}
		
	}
	return -1;
}



int main(){
	int n,x;
	
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	cin>>x;
	cout<<binarySearch(arr,n,x);
	
}

