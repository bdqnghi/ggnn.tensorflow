   void main()
   {int n,m,i,j,ms,s[400]={0},x[400];
    for (;;)
    {for (i=1;i<=400;i++)
	     s[i]=0;
	scanf("%d", &n);
	scanf("%d", &m);
	if (n==0&&m==0)
		break;
	for (i=1,j=1;i<=m*(n-1);i++)
	{x[j]=i;
	 if (x[j]%m==0)
		 s[j]=1;
	 for (;;)
		 {if (j==n)
		     j=1;
		  else j=j+1;
		  if (s[j]==0)
			  break;}
	}
	for (i=1;i<=n;i++)
		if (s[i]==0)
		printf("%d\n", i);
	}
	
   }