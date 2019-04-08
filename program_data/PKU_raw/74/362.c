
long int prime(long int i)
{
    long int j,f=1;
	for(j=2;j*j<=i;j++)
		if(i%j==0)
		{
			f=0;
			break;
		}
	return f;

}

long int hw(long int i)
{
	int r=i,j=0;
	for(;;)
	{
		j=j*10+i%10;
		i=i/10;
		if(i==0)
			break;


	}
	if(j==r)
		return 1;
	else
		return 0;
}

void main()
{
	long int m,n,i,j;
	scanf("%ld %ld",&m,&n);

	for(i=m,j=0;i<=n;i++)
	{
		if(hw(i)==1&&prime(i)==1)
		{
			j++;
			
			if(j!=1)
				printf(",");
			printf("%ld",i);
							
		}
	}
	if(j==0)
		printf("no\n");



}