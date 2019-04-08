main()
{
	char c[301]={'\0'};
    scanf("%s",c);
	int i,j,t,n,sum,l;
	j=0;
	l=strlen(c);
	for(n=65;n<=90;n++)
	{
	    t=n;
		sum=0;
		for(i=0;i<l;i++)
			if(t==c[i])
				sum=sum+1;
		if(sum>=1)
		{
			printf("%c=%d\n",n,sum);
		    j=j+1;
		}
        
	}
    for(n=97;n<=122;n++)
	{
	    t=n;
		sum=0;
		for(i=0;i<l;i++)
			if(t==c[i])
				sum=sum+1;
		if(sum>=1)
		{
			printf("%c=%d\n",n,sum);
		    j=j+1;
		}
	}
	if(j==0)
		printf("No");	
}