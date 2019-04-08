void main()
{
	int n,i,j,m,s=0;
	char a[60],b[60],c;
	scanf("%s",a);
	n=strlen(a);
	scanf("%s",b);
	m=strlen(b);
	for(i=0;i<m-n;i++)
	{
		if(a[0]==b[i])
		{
			for(j=0;j<n;j++)
			{
				if(a[j]==b[i+j]) s=s+1;
			}
		}
		if(s==n) break;
		s=0;
	}
	printf("%d",i);
}