void main()
{
	long i,n,k,t,s;
	scanf("%ld",&n);
	for(i=6;i<=n;i+=2)
	{
		for(k=2;k<=i/2;)
		{
			loop: for(t=2;t<=sqrt(k);t++) {if(k%t==0) {k++;t=2;}}
			s=i-k;
			for(t=2;t<=sqrt(s);t++) {if(s%t==0) {k++;goto loop;}}
			printf("%ld=%ld+%ld\n",i,k,s);break;
		}
	}
}
									