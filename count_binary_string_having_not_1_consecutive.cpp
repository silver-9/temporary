#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n]={0};
	arr[2]=3;
	arr[3]=5;
	for(int i=4;i<=n;i++)
	{
        arr[i]=arr[i-2]+arr[i-1];
	}
	cout<<arr[n]<<"\n";
	return 0;
}