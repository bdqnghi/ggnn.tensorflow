void main()
{
    long int b,c,n,i,j;
    long int q[1000000];
     scanf("%ld\n",&n); 
    for(i=0;i<n;i++)
    scanf("%ld",&q[i]);
    scanf("%ld",&b);
    for(i=0;i<n;i++)
    {
    	c=0;
    	if(q[i]==b)
    	{for(j=i;j<n;j++)
    		q[j]=q[j+1];
    		c=1;
    	}
    	if(c==1)
    	{n=n-1;
    	i=i-1;
    	}
    }
    for(i=0;i<n-1;i++)
    printf("%ld ",q[i]);
    printf("%ld",q[n-1]);
}