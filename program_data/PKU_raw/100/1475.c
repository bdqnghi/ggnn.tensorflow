void main()
{
	char s[300];
	int tag=0,i,n,j,m;
	gets(s);
	n=strlen(s);
    for(i=0;i<n;i++)
	if((((int)s[i]>=65)&&((int)s[i]<=90))||(((int)s[i]>=97)&&((int)s[i]<=122)))
		tag=1;
	if (tag==0)
		printf("No");
	for(j=65;j<91;j++)
	{
		m=0;
		for(i=0;i<n;i++)
			if((int)s[i]==j)
				m=m+1;
		if(m!=0)
			printf("%c=%d\n",j,m);
	}
	for(j=97;j<123;j++)
	{
		m=0;
		for(i=0;i<n;i++)
			if((int)s[i]==j)
				m=m+1;
		if(m!=0)
			printf("%c=%d\n",j,m);
	}
}
