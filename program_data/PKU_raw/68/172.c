int main()

{
	long n,a,i,j,k,t,b,d;
	scanf("%ld",&n);
	for(d=6;d<=n;d += 2)
	{
	 for(a=3;a<d;a++)
	 {
		k=sqrt(a);
	   for(i=2;i<=k;i++)
	   {
		if(a%i==0) 
			break;
	   }
		if(i>=k+1)
		{
			b=d-a;
			t=sqrt(b);
            for (j = 2; j <= t; j++)
			{
				if(b%j==0) 
				 break;
			}
			 if(j>=t+1) 
			 {
				 printf("%ld=%ld+%ld\n",d,a,b);
				 break;
			 }
		}
	 }
	}
return 0;
}
