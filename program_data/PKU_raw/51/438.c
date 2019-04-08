void main()
{
	int n,i,j,s=0,num[500],k,m,sum,l;
	char a[500][10]={'\0'},b[550]={'\0'},c[500][10]={'\0'};
	scanf("%d",&n);
	scanf("%s",b);
	sum=strlen(b);
	for(i=0;i<500;i++) num[i]=1;
	for(i=0;i<=sum-n;i++)
		for(j=0;j<n;j++)
			a[i][j]=b[i+j];
	strcpy(c[0],a[0]);
	for(i=1;i<=sum-n;i++)
	{
		if(strcmp(a[0],a[i])==0)
		{
			for(j=0;j<n;j++) a[i][j]='\0';
			num[s]=num[s]+1;
		}
	}
	for(k=1;k<=sum-n;k++)
	{
		if(a[k][0]!='\0')
		{s=s+1;strcpy(c[s],a[k]);}
		for(j=k+1;j<=sum-n;j++)
		{
			if(a[j][0]!='\0')
			{
				if(strcmp(a[j],a[k])==0)
				{
					for(l=0;l<n;l++) a[j][l]='\0';
					num[s]=num[s]+1;
				}
			}
		}
	}
	m=0;
	for(i=1;i<=s;i++)
	{if(num[i]>num[m]) m=i;}
	if(num[m]==1) printf("NO");
	else
	{
		printf("%d\n",num[m]);
		for(i=0;i<=s;i++)
		{
			if(num[i]==num[m])
			{
				for(j=0;j<n;j++) printf("%c",c[i][j]);
				printf("\n");
			}
		}
	}
}