main()
{
	for(;;)
	{
		int n,m,a[300]={0};
		scanf("%d %d",&n,&m);
		if(n==0) 
		break;
		int i,s,t=0;
		s=n;
		while(s!=1)
		for(i=0;i<n;i++)
		{
			if(a[i]==0) 
		    t++;
			if(t==m)
		   	{
				a[i]=1;
				s--;
				t=0;
			}
			if(s==1)     break;
		}	
		for(i=0;i<n;i++)
		if(a[i]!=1)  
		break;
		printf("%d\n",i+1);
	}
	
} 