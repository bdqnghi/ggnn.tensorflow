void main()
{
	int n,i,j,k;
	char *p,*p0,c;
	p=p0=(char *)malloc(100*100*sizeof(char));
	scanf("%d",&n);
	gets(p);
	for(i=0;i<n;i++)
	{
		gets(p);
		k=1;
		for(p=p0,j=0;*(p+j)!='\0';j++)
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

