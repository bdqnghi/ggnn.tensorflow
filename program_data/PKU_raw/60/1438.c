main()
{
	int n,m,i,j,k,l=0;
	scanf("%d",&n);
	n=n-2;
	for(i=2;i<=n;i++)
	{
		j=0;
		for(m =2;m <i;m ++)  /*panduan i shifou sushu*/
		{
			if(i%m==0)
				j++;
		}
	    if(j==0)  /*i shisushu*/
	    {
		    k=i+2;
			for(m =2;m <k;m ++)  /*panduan k shifou sushu*/
		    {
			if(k%m==0)
				j++;
		    }
			if(j==0)  /*k shisushu*/ 
			    {
				   printf("%d %d\n",i,k);
				   l++;   /*l zhaodao de sushudui shu*/
				} 	
		}
	    
	}
	if(l==0)
	   printf("empty");
}