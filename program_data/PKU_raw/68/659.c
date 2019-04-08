int sushu(long a)
{
	long i;
	for(i=2;i<=(int)sqrt(a);i++)
		if(a%i==0)
			break;
	if(i==(int)sqrt(a)+1)
		return 1;
	return 0;
}
void main()
{
	long n,i,j;
	scanf("%ld",&n);
	for(j=6;j<=n;j+=2)
	{printf("%d=",j);
	for(i=2;i<=j/2;i++)
		if(sushu(i)&&sushu(j-i))
		{printf("%d+%d\n",i,j-i);break;}
	}
}