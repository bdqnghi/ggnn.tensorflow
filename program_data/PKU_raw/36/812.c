void main()
{
	int n,m,i,j;
	char a[100],b[100];
	scanf("%s%s",a,b);
	n=strlen(a);
	m=strlen(b);
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
			if(a[i]==b[j])
			{
				a[i]='1';
				b[j]='2';
			}
	}
	for(i=0;i<=m;i++)
		if(b[i]!='2')
			break;
	for(j=0;j<=n;j++)
		if(a[j]!='1')
			break;
		
		if(i==m&&j==n)
			printf("YES");
		else
			printf("NO");
	
}








		