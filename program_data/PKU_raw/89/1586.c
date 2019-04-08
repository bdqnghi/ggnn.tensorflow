/*
 * shehuimingliu.cpp
 *
 *  Created on: 2011-1-8
 *      Author: lz
 */

int people[20000][20000];
int main()
{
	int n;
	cin>>n;
	int a;
	int b;

	int i;
	int j;
	cin>>a>>b;
	while(a!=0||b!=0)
	{
		people[a][b]=1;
		cin>>a>>b;
	}
	for(j=0;j<n;j++)
	{
		for(i=0;i<n;i++)
		{
			if(i!=j)
			    if(people[i][j]==1&&people[j][i]==0)
				    continue;
			    else
				    break;
		}
		if(i==n)
		{
			cout<<j;
			break;
		}
	}
	if(j==n)
	{
		cout<<"NOT FOUND";
	}
	return 0;
}
