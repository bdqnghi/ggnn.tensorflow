
int main(int argc, char* argv[])
{
	int n,i,j,a[1000][1000],x,y,p,q,s;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(a[i][j]==0&&a[i+1][j]==0&&a[i][j+1]==0)
			{
				x=i;
				y=j;
			}
		}
	}
	for(i=1;i<n;i++)
	{
		for(j=1;j<n;j++)
		{
			if(a[i][j]==0&&a[i-1][j]==0&&a[i][j-1]==0)
			{
				p=i;
				q=j;
			}
		}
	}
	s=(p-x-1)*(q-y-1);
	printf("%d",s);
	return 0;
}

