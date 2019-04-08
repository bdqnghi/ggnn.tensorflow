void main()
{
	char a[11]={'\0'},b[4]={'\0'};
	char c;
	int i,k,m;
	while(scanf("%s %s",a,b)!=EOF)
	{
		m=strlen(a);
		c=a[0];
		for(i=1;i<m;i++)
			if(a[i]>c)
			{
				c=a[i];
				k=i;
			}
			for(i=0;i<=k;i++)
				printf("%c",a[i]);
			printf("%s",b);
			for(i=k+1;i<m;i++)
				printf("%c",a[i]);
			printf("\n");
	}
}