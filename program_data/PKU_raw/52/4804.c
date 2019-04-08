/*
 * yidongshuzu.cpp
 *
 *  Created on: 2011-12-9
 *      Author: Dai Guangda
 */
int main()
{
	int n,m,a[200],*p;
	cin >>n >>m;
	for (p=a; p<a+n; p++)
		cin >>*p;
	for (p=a+n-1; p>=a; p--)
		*(p+m) = *p;
	for (p=a; p<a+m; p++)
		*p = *(p+n);
	for (p=a; p<a+n-1; p++)
		cout <<*p <<' ';
	cout <<*p;
	return 0;
}
