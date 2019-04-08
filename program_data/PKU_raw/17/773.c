main()
{int i,j,k;
	char c[100];
    int a[100]={0};
	while(scanf("%s",c)!=EOF)
	{
		
		if(c[0]=='\0')break;
			printf("%s\n",c);
		k=strlen(c);
		for(i=0;i<=k-1;i++)
		{
			if(c[i]=='(')a[i]=-1;
		 else if(c[i]==')')
		 {a[i]=1;
			 for(j=i;j>=0;j--)
			     if(a[j]==-1)
			{a[j]=2;a[i]=2;break;}
		 }	
			
			
			else a[i]=2;	
		}
		if (c[0]==')')
		   a[0]=1;
		   
    		for(i=0;i<=k-1;i++)
			{	
				if(a[i]==2)printf(" ");
				if(a[i]==-1)printf("$");
				if(a[i]==1)printf("?");
			}
	printf("\n");
	}
}
