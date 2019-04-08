int main()
{
	int n;
	char str[500];
	scanf("%d",&n);
	getchar();
	gets(str);
	char ste[500][500];
    int a[500]={0};
	int i,j;
	int m,k=0;
	m=strlen(str);
	for(i=0;i<=m-n;i++)
	{
		for(j=0;j<n;j++)
		{
			ste[i][j]=str[j+i];
		}
		ste[i][n]='\0';
	}
	int max=0;
	for(i=0;i<=m-n;i++)
	{
		for(j=i;j<=m-n;j++)
		{
			if(strcmp(ste[i],ste[j])==0)
			{
				a[i]+=1;
			}
			if(a[i]>max)
			{
				max=a[i];
			}
		}
	}
		if(max==1)
		{
			printf("NO");
		}
		else
		{
			printf("%d\n",max);
	

for(i=0;i<=m-n;i++)
{
	if(a[i]==max)
	{
		puts(ste[i]);
	}
}
		}
return 0;
}
