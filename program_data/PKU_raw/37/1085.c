int main()
{
	int k;
	int i,j,r;
	char a[300]={'\0'};
	gets(a);
	k=atoi(a);
	int m;
	for(i=0;i<=k-1;i++)
	{
		char a[300]={'\0'};
		gets(a);
		for(j=0;a[j]!='\0';j++)
		{
			m=0;
			for(r=0;a[r]!='\0';r++)
			{
				if(a[r]==a[j])
				{
					m++;
				}
			}
			if(m==1)
			{
				printf("%c\n",a[j]);
				break;
			}
		}
		if(a[j]=='\0')
		{
			printf("no\n");
		}
	}
	return 0;
}