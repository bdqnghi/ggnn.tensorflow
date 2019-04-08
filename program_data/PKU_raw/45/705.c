void main()
{
	char a[50],b[50],c[50]={0};
	scanf("%s",a);
	scanf("%s",b);
	int i,j,k=0,q=0;int m=strlen(a);int n=strlen(b);
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(b[j+i]==a[j])
				c[i]=c[i]+1;
		}
	}
	for(i=0;i<n;i++)
		if(c[i]==m)
		{
			printf("%d\n",i);
			break;
		}
}