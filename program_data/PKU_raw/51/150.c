void main()
{
	int m,n,i,j,p;
	char s[501],a[500][5];
	int c[500];
	scanf("%d\n",&n);
	gets(s);
	m=0;p=0;
	while(s[p]!='\0')
	{p++;}
    for(i=0;i<500;i++)
	{
		for(j=0;j<5;j++)
			a[i][j]=0;
	}
	for(i=0;i<p-n+1;i++)
	{
       for(j=i;j<i+n;j++)
		   a[i][j-i]=s[j];
	}
for(i=0;i<500;i++)
		c[i]=0;
	for(i=0;i<p-n-1;i++)
	{
		for(j=i;j<p-n+1;j++)
		{
			if(strcmp(a[j],a[i])==0)
            c[i]++;
        }
	}
	for(i=0;i<p-n;i++)
	{
		
		if(c[i]>m)
			m=c[i];
	}
	if(m==1)
		printf("NO");
	else
	{
		printf("%d\n",m);
	for(i=0;i<p-n;i++)
	{
		if(c[i]==m)
			printf("%s\n",a[i]);
	}
	}

}
