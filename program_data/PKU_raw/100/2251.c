main()
{
	char a[301];
	int b[26]={0},c[26]={0},i,j,l,n,m,p,q,k=0;
	n='a';
	m='z';
	p='A';
	q='Z';
	scanf("%s",a);
	l=strlen(a);
	for(i=0;i<l;i++)
	{
		for(j=0;j<26;j++)
		{
			if(a[i]==j+n)
				b[j]++;
			if(a[i]==j+p)
				c[j]++;
		}
	}
	for(i=0;i<26;i++)
	{
		if(c[i]!=0)
		{
			printf("%c=%d\n",i+'A',c[i]);
			k++;
		}
	}
	for(i=0;i<26;i++)
	{
		if(b[i]!=0)
		{
			printf("%c=%d\n",i+'a',b[i]);
			k++;
		}
	}
	if(k==0)
	{
		printf("No");
	}
	return 0;
}

