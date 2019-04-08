main()
{
	int n;
	int i,j,k,m,a;
	char str[N];
	int temp=0;
	int  num[N]={0};
	scanf("%d",&n);
	scanf("%s",str);
	for(i=0;i<strlen(str)-n;i++)
	{
		for(j=i+1;j<strlen(str)-n+1;j++)
		{
			if(str[i]==str[j])
			{
				for(k=1;k<n;k++)
				{
					if(str[i+k]==str[j+k])
					   temp++;
				}
				if(temp==(n-1))
				  num[i]++;
			}
			temp=0;
		}
	}
	a=0;
	for(m=0;m<strlen(str)-n;m++)
	{
		if(num[m]>a)
		  a=num[m];
	}
	if(a==0)
	  printf("NO");
	else
	{
		printf("%d\n",a+1);
		for(j=0;j<strlen(str)-n+1;j++)
	    {
	    	if(num[j]==a)
	    	{
	    		for(i=0;i<n-1;i++)
	    		{
	    			printf("%c",str[j+i]);
	    		}
	    		printf("%c\n",str[j+n-1]);
	    	}
	    }
	}
}