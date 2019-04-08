/*
 * 12.24.2.cpp
 *
 *  Created on: 2012-12-11
 *      Author: slkingxr
 */
int main()
{
	int a[101],i;
	int n,*p=NULL,*q=NULL,t;
	cin>>n;
	for(i=0;i<n;i++)
		cin >>a[i];
	for(p=a,q=a+n-1;p<q;p++,q--)
	{
		t=*p;
		*p=*q;
		*q=t;
	}
	for(p=a;p<a+n-1;p++)
		cout <<*p<<" ";
	cout <<*p;
	return 0;
}

