int main()                        
{
	int k,i=10,m,n,a;
    scanf("%d",&k);
		n=k;
		for(;;)
		{
			m=n%i;
			n=n/i;
			printf("%d",m);
			if(n==0) break;
		}
}