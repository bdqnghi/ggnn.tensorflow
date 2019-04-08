main()
{
	int x,u,i;
	char t;
	char s[10000];
	scanf("%s",s);
	x=strlen(s);
	for(i=0;i<x;i++)
	{
		if(s[i]>='a'&&s[i]<='z')
		s[i]=s[i]+'A'-'a';
	}
	u=1;
	t=s[0];
	if(x==1)
	printf("(%c,%d)",t,u);
	else if(x>1)
	{
	for(i=1;i<x;i++)
	{
		if(s[i]==t)
		{
			u++;
			if(i==x-1)
			printf("(%c,%d)",t,u);
		} 
		else
		{
			printf("(%c,%d)",t,u);
			t=s[i];
			u=1;
			if(i==x-1)
			printf("(%c,%d)",t,u);
		}
	}
	}
} 