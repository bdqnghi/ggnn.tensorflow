/*
 * 1000012861_25.cpp
 *  Created on: 2010-10-23
 *      Author: ??
 *      ???????????
 */


int main(){int m,n,i,num,j,r;
    cin>>m;
    n=m;
	int a[n] ;
	for(i=0;i<n;i++)
	cin>>a[i];
	cin>>num;
	for(i=0;i<n;i++)
	if(a[i]==num){
		for(j=i;j<n;j++)
		a[j]=a[j+1];
	i=i-1;
	n=n-1;}

	for(i=0;i<=n-2;i++)
	cout<<a[i]<<" ";
	cout<<a[i];
    return 0;
}