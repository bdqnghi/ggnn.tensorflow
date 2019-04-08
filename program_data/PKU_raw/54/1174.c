/*
 * wanyi.cpp
 *
 *  Created on: 2012-11-12
 *      Author: 7
 */
int apple(int n,int k,int a)
{
	if(a%(n-1)==0)
	return a=a/(n-1)*n+k;
	else return -1;
}

int main()
{
	int n,k,a,i;
	cin>>n>>k;
	for(i=1;;i++)
	{
		a=i;
		for(int j=0;j<n;j++)
		{a=apple(n,k,a);
		if(a==-1)
			break;
		}
		if(a==-1)
			continue;
		else
			break;
	}
	cout<<a;
}
