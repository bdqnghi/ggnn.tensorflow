/*
 * duanwenpaixu.cpp
 *
 *  Created on: 2013-12-5
 *      Author: ???
 */
int main()
{
	int a[100];
	int n;
	int *p=NULL;
	cin>>n;
	for(p=a;p<=&a[n-1];p++)
		cin>>*p;
	for(;p>a+1;)
		cout<<*--p<<' ';
	cout<<*--p;
	return 0;


}
