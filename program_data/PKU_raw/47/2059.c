/*
 * 20121113-8.cpp
 *
 *  Created on: 2012-11-20
 *      Author: ???
 */



int main(){
	int n,i,j,k;
	cin>>n;
	int a[n],b[n];
	for(i=1;i<=n;i++)
	{
		cin>>a[i];//??
	}
	for(j=1;j<=n;j++)
	{
		b[j]=a[n+1-j];//??
	}
	cout<<b[1];
	for(k=2;k<=n;k++)
	{
		cout<<" "<<b[k];
	}
	return 0;
}
