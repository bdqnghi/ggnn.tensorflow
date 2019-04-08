main()
{
	int max(int m[500]);
	int i=0,j=0,k=0,n,p,x;
	char c[500]={'\0'};
	int m[500]={0};
	char a[5]={'\0'};
	scanf("%d\n",&n);
	scanf("%s",c);
	for(i=1;i<(L-n+1);i++)
	{
		for(j=0;j<i;j++)
		{p=0;
			for(k=0;k<n;k++)
				if(c[i+k]==c[j+k])p++;
			if(p==n)m[j]++;
		}
	}
	x=max(m)+1;
	if(x>1)
	{
	printf("%d\n",x);
	for(i=0;i<L;i++)
	{
		if(m[i]==max(m))
		{
			for(k=0;k<n;k++)a[k]=c[i+k];
			printf("%s\n",a);
		}
	}
	}
	else printf("NO\n");
	return 0;
}
int max(int m[500])
{
	int i,x=0;
	for (i=0;i<500;i++)
		if(m[i]>m[x])x=i;
	return (m[x]);
}