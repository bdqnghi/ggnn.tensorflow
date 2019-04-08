//============================================================================
// Name        : 8.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : 
//============================================================================


int main() {
	int n=0,i=0,j=0,t=0;
	cin>>n;
	int a[100000];
	for (i=0;i<n;i++){
		cin>>a[i];
	}
	for (i=0,j=n-1;i<j;i++,j--){
		t=a[i];
		a[i]=a[j];
		a[j]=t;
	}
	for (i=0;i<n-1;i++){
		cout<<a[i]<<" ";
	}
	cout<<a[n-1];
	return 0;
}
