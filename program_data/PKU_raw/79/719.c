/*
 * wanyi.cpp
 *
 *  Created on: 2012-11-10
 *      Author: 7
 */
int main()
{
	int a[301],count,n,m,i,j;
	while(cin>>n>>m&&n!=0&&m!=0)
	{
		for(i=0;i<301;i++)
		a[i]=i;
		count=n;
		j=m;
		while(count>1)
		{
			for(i=1;i<=n;i++)
			{
				if(a[i]!=0)
				{
					j--;
					if(j==0)
					{
						a[i]=0;
						j=m;
						count--;
						if(count==1)
							break;
					}
				}
			}
		}
		for(i=1;i<=n;i++)
		{
			if(a[i]!=0)
				cout<<i<<endl;
		}
	}
}
