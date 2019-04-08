void main()
{
     int sz[301],i,n,u,s,temp,k;
	 for(i=0;i<=300;i++) sz[i]=10000;
	 scanf("%d",&sz[0]);
	 for(i=1;i<=300;i++)
		 scanf(",%d",&sz[i]);
	 n=0;
	 do
	 {
         n++;
	 }while(sz[n]!=10000);
	 u=0;
	 do
	 {
       s=0;
	   for(i=0;i<=n-2;i++)
	   {
         if(sz[i]<sz[i+1])
		 {
           temp=sz[i];
		   sz[i]=sz[i+1];
		   sz[i+1]=temp;
		   u=1;
		 }
	   }
	   for(i=0;i<=n-2;i++)
         if(sz[i]<sz[i+1])
			 s=1;
	 }while(s!=0);

	if(n==1) printf("No");
	else if(n!=1&&u==0) printf("No");
	else if(n!=1&&u!=0) 
	{
		for(k=1;k<=n-1;k++)
		{
          if(sz[k]!=sz[0]) break;
		}
		printf("%d",sz[k]);
	}
    return 0;
}