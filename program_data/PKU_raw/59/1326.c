int n,i,j,k,m,r=0;
char a[100][101],b[100][101];
void cr(char a[100][101]);
int main()
{
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",a[i]);
	}
	scanf("%d",&m);
	cr(a);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]=='@')
			{
				r++;
			}
		}
	}
	printf("%d",r);
	return 0;
}
void cr(char a[100][101])
{
	for(i=0;i<n;i++)
	{
		strcpy(b[i],a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(b[i][j]=='@')
			{
				if(i!=0&&b[i-1][j]=='.')
				{
					a[i-1][j]='@';
				}
				if(j!=0&&b[i][j-1]=='.')
				{
					a[i][j-1]='@';
				}
				if(i!=n-1&&b[i+1][j]=='.')
				{
					a[i+1][j]='@';
				}
				if(j!=n-1&&b[i][j+1]=='.')
				{
					a[i][j+1]='@';
				}
			}
		}
	}
	m=m-1;
	if(m!=1)
	{
		cr(a);
	}
}