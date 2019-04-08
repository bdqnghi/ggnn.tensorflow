int main()
{
	int m,n,i,j,t=0;
	char c[256],d[256],e[256];
	scanf("%s",c);
	scanf("%s",d);
	scanf("%s",e);
	m=strlen(c);
	n=strlen(d);
	for(i=0;i<m;i++)
	{
		if(c[i]==d[0])
		{
			t=0;
			for(j=i;j<i+n;j++)
			{
				if(c[j]==d[j-i])
				{
					t=t+1;
				}
			}
			if (t==n)
			{
				for(j=i;j<i+n;j++)
				{
					c[j]=e[j-i];
				}
				break;
			}
		}
	}
	printf("%s",c);
	return 0;
}

