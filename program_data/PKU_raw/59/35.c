
void main()
{
    char a[100][100],b[100][100];
	int n,i,k,q,j,w,e;
	scanf("%d",&n);
	for(i=0;i<n;i++) 
		scanf("%s",a[i]);
	scanf("%d",&k);
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
				b[i][j]=a[i][j];
	int empty=0;
	for(i=0;i<n;i++)
	{
			for(j=0;j<n;j++)
			{
				if(a[i][j]=='#') empty++;
			}
	}
	int num=n*n-empty;
	for(q=1;q<k;q++)
	{
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
			{
					if(i>0&&a[i][j]=='@'&&a[i-1][j]=='.') b[i-1][j]='@';
					if(j>0&&a[i][j]=='@'&&a[i][j-1]=='.') b[i][j-1]='@';
					if(j<n&&a[i][j]=='@'&&a[i][j+1]=='.') b[i][j+1]='@';
					if(i<n&&a[i][j]=='@'&&a[i+1][j]=='.') b[i+1][j]='@';
					if(a[i][j]=='@') b[i][j]='@';
			}
		for(w=0;w<n;w++)
			for(e=0;e<n;e++)
				a[w][e]=b[w][e];
	}
	int x=0;
	for(i=0;i<n;i++)
	{
			for(j=0;j<n;j++)
			{
				if(a[i][j]=='@') x=x+1;
			}
	}
	 
		printf("%d",x);


	
}