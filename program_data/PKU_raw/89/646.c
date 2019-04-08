/*
 * shehuimingliu.cpp
 *
 *  Created on: 2010-12-13
 *      Author: ??
 *      ????????
 */
int main()
{
	int i,a[10000]={0},n,a1,a2,flag=0;
	cin >> n;

	while(1)
	{
		cin >> a1 >> a2;
		if(a1==0&&a2==0) break;
		else { a[a1]=-1000; a[a2]++;}
	}
	for(i=0;i<n;i++)
	{
		if(a[i]==n-1) {
			cout << i;
		   flag=1;}
	}
	if(flag==0) cout << "NOT FOUND";
	return 0;
}
