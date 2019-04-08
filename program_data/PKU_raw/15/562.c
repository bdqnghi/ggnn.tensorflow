
int main()
{
	int a[1000][1000];
	int t,i,j,x=0,b=0,m=0,n=0,s,s1,s2;

	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		for(j=0;j<t;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<t;i++)
	{
		for(j=0;j<t;j++)
		{
			if(a[i][j]==0)
			{
				x=i;
				b=j;
   			break;
			}
			
		}
		if(a[x][b]==0)
			break;
	}
	for(i=t-1;i>=0;i--)
	{
		for(j=t-1;j>=0;j--)
		{
			if(a[i][j]==0)
			{
				m=i;
				n=j;
			
				break;
			}
			
		}
		if(a[m][n]==0)
				break;
	}
	s1=m-x-1;
	s2=n-b-1;
	s=s1*s2;
	printf("%d\n",s);
	return 0;
}

