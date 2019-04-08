void main()
{
	int n,i,j,m,p;
	char a[10000][30]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",a[i]);
		if(a[i][0]==95||(a[i][0]>=97&&a[i][0]<=122)||(a[i][0]>=65&&a[i][0]<=90))
		{
		m=strlen(a[i]);
		p=0;
		for(j=1;j<m;j++)
		
		if(a[i][j]==95||(a[i][j]>=48&&a[i][j]<=57)||(a[i][j]>=97&&a[i][j]<=122)||(a[i][j]>=65&&a[i][j]<=90))
			p=p+1;
		
		if(p==m-1)
			printf("yes\n");
		else printf("no\n");
	
		}
		else printf("no\n");
	}

}