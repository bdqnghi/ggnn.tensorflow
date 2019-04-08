void main()
{
	char s[500],a[500];
	int i,j,t,l,n,k,max,sig;
	scanf("%d\n",&n);
	gets(s);
	l=strlen(s);
	for(i=0;i<=(l-n);i++)
	{
		a[i]=0;
		for(j=i;j<=(l-n);j++)
		{
			sig=1;
			for(k=0;k<n;k++)
			{
				if(s[i+k]==s[j+k])
					t=1;
				else t=0;
				sig=(1*t*sig);
			}
			if(sig==1)
				a[i]++;
		}
	}
	max=1;
	for(i=0;i<=(l-n);i++)
	{
		if(a[i]>=max)
			max=a[i];
	}
	if(max!=1)
	{
	printf("%d\n",max);
	for(i=0;i<=(l-n);i++)
	{
		if(a[i]==max)
		{
			for(k=0;k<n;k++)
			{
				printf("%c",s[i+k]);
			}
			printf("\n");
		}
	}
	}
	else printf("NO\n");
}
		