#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;//length of an array
	cin>>n;//reading an array
	int arr[n];//declare an array
	int prefix[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<endl;
	}
	int sum=0;//intial sum=0 
	for(int i=0;i<n;i++)
	{
		sum=sum+arr[i];
	}
	cout<<"summ of array is:"<<sum;
	for(int i=0;i<n;i++){
		cin>>prefix[i];
	}
	prefix[0]=arr[0];//prefix[0] should be equal to arr[0]
	//we should start from i=1 because we already intialized prefix[0]
	for(int i=1;i<n;i++)
	{
		prefix[i]=prefix[i-1]+arr[i];//prefix[1]=prefix[0]+arr[1]
	}
	for(int i=0;i<n;i++){
		cout<<prefix[i]<<endl;//we can use endl or /n for new line

	}
	int sums=0;
	for(int i=0;i<n;i++){
		sums=sums+prefix[i];
	}
	cout<<"sum of prefix is:"<< sums<<endl;
	int maxi=1;
	for(int i=0;i<n;i++){
		if (prefix[i]>maxi){
			maxi=prefix[i];
		}

	}
	cout<<maxi;


}