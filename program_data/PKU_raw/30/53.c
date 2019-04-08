
void main()
{
	int i,n;
	long sum=0;
    scanf("%d",&n);
	for (i=1; i<=n; i++)
	{
		if ((7*floor(i/7)!=i) && (i%10 != 7) && (i/10 !=7) )
		
			sum=sum + i*i ;
	
		
	}
	printf("%d\n",sum);
}
