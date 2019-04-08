void main()
{
	char a[500],b[500][5]={'\0'};
	int n,i,j,k,t,p=0,m[500]={0};
	scanf("%d",&n);
	getchar();
	gets(a);
	
	k=strlen(a);
	for(i=0;i<k-n+1;i++)
	{
		for(j=i;j<n+i;j++)
		{
			b[i][j-i]=a[j];
		}
		b[i][n] = '\0';
		//printf("%s\n",b[i]);
	}

	t=0;
    for(i=0;i<k-n+1;i++)
	{
		if(m[i]!=1)
		{
			m[i]=0;
		
	    	for(j=i;j<k-n+1;j++)
			{
		       if(strcmp(b[i],b[j])==0)
			   {
				m[i]=m[i]+1;
				m[j]=1;
			   }
			}
			if(m[i]>t)
			{
				t=m[i];
			//	printf("%d %s\n",i, b[i]);
			}
		
		    if(m[i]==1)
			p=p+1;

		}
		//printf("%d\n",m[i]);
	}

	if(p==k-n+1)
		printf("NO");
	else
	{
		printf("%d\n",t);
		for(i=0;i<k-n+1;i++)
		{
			if(m[i]==t)
				printf("%s\n",b[i]);
		}
	}
//	printf("1");
}