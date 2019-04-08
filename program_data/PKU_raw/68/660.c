int sushu(long a)
{
	long i,temp;
	if(a==2||a==3)
		return 1;
	if(a%2==0)
		return 0;
	temp=(int)sqrt(a);
	for(i=3;i<=temp;i+=2)
		if(a%i==0)
			break;
	if(i>temp)
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