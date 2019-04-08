/*
 * jisuanjuzhen.cpp
 *
 *  Created on: 2011-1-8
 *      Author: Owner
 */
int main()
{
	int n;
	int x,y;
	int a[100][100];
	int i,j,k,l,m;
	int s;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>x>>y;
		for(j=0;j<x;j++)
		{
			for(k=0;k<y;k++)
			{
				cin>>a[j][k];
			}
		}
		s=0;
		for(l=0;l<y;l++)
		{
			s=s+a[0][l]+a[x-1][l];
		}
		for(m=1;m<x-1;m++)
			s=s+a[m][0]+a[m][y-1];
		cout<<s<<endl;

	}
	return 0;
}