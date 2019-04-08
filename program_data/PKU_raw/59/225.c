/*
 * kaoshi4.cpp
 *
 *  Created on: 2011-12-31
 *      Author: 2011
 */

int main()
{
	int n,i,j,m,s=0,a[101][101];
	char pan[101][101];
	cin>>n;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			cin>>pan[i][j];
	cin>>m;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		{
			if(pan[i][j]=='@')
				a[i][j]=1;
			else	a[i][j]=0;
		}
	while(m>1)
	{
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
				if(pan[i][j]=='@'&&a[i][j]==1)
				{
					if((i-1)>=0&&pan[i-1][j]=='.')
						pan[i-1][j]='@';
					if((i+1)<n&&pan[i+1][j]=='.')
						pan[i+1][j]='@';
					if((j-1)>=0&&pan[i][j-1]=='.')
						pan[i][j-1]='@';
					if((j+1)<n&&pan[i][j+1]=='.')
						pan[i][j+1]='@';
				}
		for(i=0;i<n;i++)
				for(j=0;j<n;j++)
				{
					if(pan[i][j]=='@')
						a[i][j]=1;

				}
		m--;
	}
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			if(pan[i][j]=='@')
				s++;
	cout<<s;
	return 0;


}
