void main()
{
	int n,i,j,k;
	char str[100],*p,c;
	p=str;
	scanf("%d",&n);
	gets(str);
	for(i=0;i<n;i++)
	{
		gets(str);
		k=1;
		for(j=0;*(p+j)!='\0';j++)
		{
			c=*(p+j);
			if(j==0)
				if((c<'a'||c>'z')&&(c<'A'||c>'Z')&&c!='_')
				{
					k=0;
					break;
				}
			if(j!=0)
				if((c<'a'||c>'z')&&(c<'A'||c>'Z')&&c!='_'&&(c<'0'||c>'9'))
				{
					k=0;
					break;
				}
		}
		printf("%d%s",k,i==n-1?"":"\n");
	}
}

