void main()
{
	int n,i,j;
	struct num
	{
		char a[101];
		int na;
		char b[101];
		int nb;
		char c[101];
	}num[999];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",num[i].a);
		scanf("%s",num[i].b);
		getchar();
	}
	for(i=0;i<n;i++)
	{
		for(j=0;num[i].a[j]!='\0';j++)
			num[i].na=j+1;
		for(j=0;num[i].b[j]!='\0';j++)
			num[i].nb=j+1;
		for(j=1;j<=num[i].nb;j++)
		{
			num[i].c[num[i].na-j]=num[i].a[num[i].na-j]-num[i].b[num[i].nb-j]+'0';
			if(num[i].c[num[i].na-j]<'0')
			{
				num[i].a[num[i].na-j-1]--;
				num[i].c[num[i].na-j]+=10;
			}
		}
		for(j=0;j<num[i].na-num[i].nb;j++)
			num[i].c[j]=num[i].a[j];
		num[i].c[num[i].na]='\0';
		printf("%s\n",num[i].c);
		
	}
}