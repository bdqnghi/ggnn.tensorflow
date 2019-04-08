/*
 * linofjuz.cpp
 *
 *  Created on: 2011-12-25
 *      Author: Administrator
 */

int main()
{
	int n;int a,b;
	int juzhen[100][100];
	cin>>n;
	for(int m=1;m<=n;m++)
	{
		cin>>a>>b;
		for(int i=0;i<a;i++)
			for(int j=0;j<b;j++)
				cin>>*(*(juzhen+i)+j);
		int s=0;
		for(int i=0;i<b;i++)
		{
			s=juzhen[0][i]+s;
			s=juzhen[a-1][i]+s;
		}
		for(int j=1;j<a-1;j++)
		{
			s=juzhen[j][0]+s;
			s=juzhen[j][b-1]+s;
		}
		cout<<s<<endl;
	}
}
