//============================================================================
// Name        : 2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


int main() {
	int n;
	cin>>n;
	int a[100],b[100];
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n;i++)
		b[i]=a[n-1-i];
	cout<<b[0];
	for(int i=1;i<n;i++)
	{
		a[i]=b[i];
		cout<<" "<<a[i];
	}
	return 0;
}