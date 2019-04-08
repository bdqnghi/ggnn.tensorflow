void main()
{
	void f(int n,char str[][101],int a[][101]);
	int n,m,i,j,s=0;
	char str[101][101];
	int a[101][101];
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(j!=n-1) scanf("%c",&str[i][j]);
			else scanf("%c\n",&str[i][j]);
            a[i][j]=0;
		}
	}
	scanf("%d",&m);
	while(m>1)
	{
		f(n,str,a);
		m--;
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(str[i][j]=='@') s++;
		}
	}
	printf("%d",s);
}
void f(int n,char str[][101],int a[][101])
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(str[i][j]=='@'&&a[i][j]==0) 
			{
				if(i+1<n&&str[i+1][j]=='.') {str[i+1][j]='@';a[i+1][j]=1;}
				if(j+1<n&&str[i][j+1]=='.') {str[i][j+1]='@';a[i][j+1]=1;}
				if(i-1>=0&&str[i-1][j]=='.') {str[i-1][j]='@';a[i-1][j]=1;}
				if(j-1>=0&&str[i][j-1]=='.') {str[i][j-1]='@';a[i][j-1]=1;}
			}
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(str[i][j]=='@') 
			{
				a[i][j]=0;
			}
		}
	}
}