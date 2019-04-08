void main()
{
	int n;
	int a=3,b=1,c=2;
	int m,p;
	scanf("%d",&n);
	while (n!=1)
	{
        if(n%2!=0)
		{
			m=3*n+1;
            
		
			printf("%d*%d+%d=%d\n",n,a,b,m);
            n=m;
		}
           
		if(n%2==0)
		{
			p=n/2;
           printf("%d/%d=%d\n",n,c,p);
            n=p;
		} 
        
		
	}
		if(n==1)
	    printf("End");
	
	

	

}