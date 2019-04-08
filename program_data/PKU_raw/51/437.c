main()
{
	int n,d[500]={0};
	char a[600],b[500][10]={0},c[10];
	scanf("%d\n",&n);gets(a);
	int i,j,k,l=0,m,x,y;
	k=strlen(a);
	for(i=0;i<=k-n;i++)
	{
		for(j=i;j<=i+n-1;j++)
		{
			c[j-i]=a[j];
		}
		c[n]='\0';
		for(m=1;m<=l;m++)
		{
			if(strcmp(c,b[m-1])==0) {x=m-1;break;}
		}
		if(m>l) {strcpy(b[m-1],c);l++;}
		else d[x]++;
	}
	int max=d[0];
	for(i=0;i<l;i++) if(d[i]>max) max=d[i];
	max++;
	if(max==1) printf("NO");
	else
	{
    	printf("%d\n",max);
	    for(i=0;i<l;i++)
		{
	    	if(d[i]==max-1) puts(b[i]);
		}
	}
	return 0;
}