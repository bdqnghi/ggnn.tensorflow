long int huiwen(long int m,long int n)
{
	
	if(m==0)
	   return(n);
	else
	   return(huiwen(m/10,n*10+m%10));
}
int sushu(long int n)
{
	long int i;
	for(i=2;i<=sqrt(n);i++)
		if(n%i==0)
			break;
	if(i>sqrt(n))
		return(1);
	else
		return(0);
}
			
void main()
{
	long int m,n,i,j;
	scanf("%ld%ld",&m,&n);
	int p=0;
	for(i=m;i<=n;i++)
	{
		if((i==huiwen(i,0))&&sushu(i))
		{
			if(p==0)
			{
				printf("%ld",i);
				p++;
			}
			else
				printf(",%ld",i);
		}
		
	}
	if((i==n+1)&&p==0)
			printf("no\n");

}
