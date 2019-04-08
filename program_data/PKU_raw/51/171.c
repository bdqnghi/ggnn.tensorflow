void main()
{
	int n,num[500]={0},l,t=0,i,j;
	char s[500],gram[600][5]={0};
	scanf("%d%s",&n,s);
	l=strlen(s);
	for(i=0;i<=l-n;i++)
	{
		for(j=0;j<n;j++)
			gram[i][j]=s[i+j];
	}
	
	for(i=0;i<l-n+1;i++)
	{
		if(strcmp(gram[i],"\0")==0)
			continue;
		else
		{
			t=0;
			for(j=0;j<l-n+1;j++)
				if(strcmp(gram[i],gram[j])==0)
				{
				t++;
				if(i!=j)
					gram[j][0]='\0';
				}
		    num[i]=t;
		}
	}
	t=num[0];
	for(i=0;i<l-n+1;i++)
	{
		if(num[i]>t)
			t=num[i];
	}
	if(t<=1)
		printf("NO\n");
	else
	{
		printf("%d\n",t);
		for(i=0;i<l-n+1;i++)
			if(num[i]==t)
				printf("%s\n",gram[i]);
	}
}


