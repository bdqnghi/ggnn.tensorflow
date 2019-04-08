void main()
{
	int i,j,k,l,n,flag;
	char str[50],substr[4];
	while(scanf("%s%s",str,substr)!=EOF)
	{
		n=strlen(str);
		for(i=0;i<=n-1;i++)
		{
			for(j=0,flag=0;j<=n-1;j++)
				if(str[i]>=str[j])flag++;
			if(flag==n)break;
		}
		for(k=n-1;k>=i+1;k--)
			str[k+3]=str[k];
		for(l=1;l<=3;l++)
			str[i+l]=substr[l-1];
		str[n+3]='\0';
		printf("%s\n",str);}}
	