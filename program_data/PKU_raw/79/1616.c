main()
{
	int gg;
	for(gg=0;;gg++)
	{
	int n,k=0,i,m,j,a[301],kick=0;
	
	for(i=1;i<=301;i++)a[i]=1;
	scanf("%d %d",&n,&m);
	if(m==0)
	break;
	if(n==1)printf("1\n");
	else{
	for(j=0;;j++)
	{
		for(i=1;i<=n;i++)
		{
			if(a[i]==1)
			{k+=1;if(k==m){a[i]=0;kick+=1;k=0;if(kick==n-1){goto loop;}}}
		}
		
	}
	loop:for(i=1;i<=n;i++)
	{if(a[i]==1)printf("%d\n",i);}
	}	}	
			
    
}