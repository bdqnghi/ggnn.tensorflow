/*
 * opkp.cpp
 *
 *  Created on: 2012-10-24
 *      Author: 1234
 */
int main()
{
	int n;
	int a,b,c;
	int m[50];
	a=b=c=1;
	cin>>n;
	for(int j=0;j<n;j++)
	{
		cin>>m[j];
		a=b=1;
		for(int i=0;i<m[j]-2;i++)
			{
				c=b;
				b=a+b;
				a=c;
			}
		cout<<b<<endl;
	}
}



