/*
 * h.cpp
 *
 *  Created on: 2013-11-1
 *      Author: Administrator
 */

char a[105][105],b[105][105];
int main()
{
	int n=0,i,j,k,p,q,sum=0;
	cin>>n;

	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
			cin>>a[i][j];
	int m;
	cin>>m;
	for(k=2;k<=m;k++)
	{
		for(i=1;i<=n;i++)
					for(j=1;j<=n;j++)
						b[i][j]=a[i][j];
		for(i=1;i<=n;i++)
				for(j=1;j<=n;j++)
				{
					if(a[i][j]=='@')
					{
						b[i][j]='@';
						for(p=-1;p<=1;p++)
							for(q=-1;q<=1;q++)
							{
								if(p==q||p==(-q))
									continue;

								if(a[i+p][j+q]=='#')
									b[i+p][j+q]='#';
								else
									b[i+p][j+q]='@';

							}
					}
				}
		for(i=1;i<=n;i++)
			for(j=1;j<=n;j++)
				a[i][j]=b[i][j];
	}
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
		{
			if(a[i][j]=='@')
				sum++;
		}
	cout<<sum<<endl;
	return 0;
}