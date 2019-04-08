int main()
{
	char c[100];

	int i;
	int chang;
	int t;
	int num=0;
	int sum=0;
	int n;
	scanf("%d",&n);
	int ji;
	gets(c);
	for(ji=0;ji<n;ji++)
	{
		gets(c);
		chang=strlen(c);
		sum=0;
		for(i=0;i<chang;i++)
		{
			num=0;
			for(t=0;t<chang;t++)
			{
				if(c[i]==c[t])
				{
					num++;
				}
			}
			if(num==1)
			{
					printf("%c\n",c[i]);
					sum++;
					goto can;
			}
			
		}
can:
		if(sum==0)
		{
			printf("no\n");
		}
	}
	return 0;
}

