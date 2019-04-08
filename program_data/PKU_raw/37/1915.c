main()
{
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		char a[100000];
		scanf("%s",a);
		int j,k,t,s=0;
		for(j=0;j<strlen(a);j++)
		{
			t=0;
			for(k=0;k<strlen(a);k++)
			if(a[k]==a[j])
			t++;
			if(t==1)
			{
				printf("%c\n",a[j]);
				break;
			}
			s++;
		}
		if(s==strlen(a))
		{
			printf("no\n");
			break;
		}
	}
	
}