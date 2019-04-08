void sr(int a[20][20]);
int sd(int i,int j,int a[20][20]);
int n,m;
int main()
{
	int a[20][20];
	int i,j;
	scanf("%d%d",&m,&n);
	sr(a);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(sd(i,j,a)==0)
				printf("%d %d\n",i,j);
		}
	}
	return 0;
}
void sr(int a[20][20])
{
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
}
int sd(int i,int j,int a[20][20])
{
	int s=0;
	if(i==0)
	{
		if(j==0)
		{
		if(a[i][j]<a[0][1]||a[i][j]<a[1][0])
			s=1;
		}
		else if(j==n-1)
		{
			if(a[i][j]<a[0][n-2]||a[i][j]<a[1][n-1])
				s=1;
		}
		else if(a[i][j]<a[i][j-1]||a[i][j]<a[i][j+1]||a[i][j]<a[1][j])
			s=1;
	}
	else if(i==m-1)
	{
		if(j==0)
		{
			if(a[i][j]<a[i-1][j]||a[i][j]<a[i][j+1])
				s=1;
		}
		else if(j==n-1)
		{
			if(a[i][j]<a[i][j-1]||a[i][j]<a[i-1][j])
				s=1;
		}
		else if(a[i][j]<a[i][j-1]||a[i][j]<a[i][j+1]||a[i][j]<a[i-1][j])
			s=1;
	}
	else
	{
		if(j==0)
		{
			if(a[i][j]<a[i-1][j]||a[i][j]<a[i+1][j]||a[i][j]<a[i][j+1])
				s=1;
		}
		else if(j==n-1)
		{
			if(a[i][j]<a[i][j-1]||a[i][j]<a[i-1][j]||a[i][j]<a[i+1][j])
				s=1;
		}
		else if(a[i][j]<a[i][j-1]||a[i][j]<a[i][j+1]||a[i][j]<a[i-1][j]||a[i][j]<a[i+1][j])
			s=1;
	}
	return s;
}