int main()
{
	int i,j,m,n,t,s=0;
	char c[100],b[100];
	scanf("%s",c);
	scanf("%s",b);
	m=strlen(c);
	n=strlen(b);
	for(i=0;i<m;i++)
	{
		for(j=m-1;j>i;j--)
		{
			if(c[j]>c[j-1])
			{
				t=c[j];
				c[j]=c[j-1];
				c[j-1]=t;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=n-1;j>i;j--)
		{
			if(b[j]>b[j-1])
			{
				t=b[j];
				b[j]=b[j-1];
				b[j-1]=t;
			}
		}
	}
	for(i=0;i<m;i++)
	{
		if(c[i]==b[i]) s=s+1;
		else break;
	}
	if (s==m) printf("YES\n");
	else printf("NO\n");
	return 0;
}
	