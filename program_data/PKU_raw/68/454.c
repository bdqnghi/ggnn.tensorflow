void main()
{
	long n,a,b,i,k,m;
	scanf("%ld",&n);
	for(i=6;i<=n;i=i+2)
	{
		  for(a=3;a<=(long)(i/2);a++)
			
		  {
			  b=i-a; 
			  for(k=2;k<=sqrt(a);k++)
			  {
				if(a%k==0)break;
			  } 
			  for(m=2;m<=sqrt(b);m++)
			  {
				if(b%m==0)break;
			  }	
			  if(k>sqrt(a)&&m>sqrt(b))
			  {
				printf("%ld=%ld+%ld\n",i,a,b);
				break;
			  }
		  }
	      
		  
	}
}
