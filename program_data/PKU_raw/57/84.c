void main()
{
	int n,i=1,j,len;
	char a[100]={0};
	scanf("%d",&n);
	while(i<=n+1)
	{
		gets(a);
		len=strlen(a);
		if((a[len-1]=='r'&&a[len-2]=='e')||(a[len-1]=='y'&&a[len-2]=='l'))
		{
		for(j=0;j<=len-3;j++)
		printf("%c",a[j]);
		printf("\n");
		}
		if(a[len-3]=='i'&&a[len-2]=='n'&&a[len-1]=='g')
		{
			for(j=0;j<=len-4;j++)
			printf("%c",a[j]);
			printf("\n");
		}
		i++;
	}
}