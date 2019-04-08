int sushu(int x)
{
	int j,z=0;
	if(x%2==0)
		z=1;
	else
	{
		for(j=3;j<=sqrt(x);j+=2)
		{
			if(x%j==0)
			{
				z=1;
				break;
			}
		}
	}
	return(z);
}
main()
{
	int max,i,j,a,b;
	scanf("%d",&max);
	for(i=6;i<=max;i+=2)
	{
		for(j=2;j<=i/2;j++)
		{
			a=sushu(j);
			b=sushu(i-j);
			if(a==0&&b==0)
			{
				printf("%d=%d+%d\n",i,j,i-j);
				break;
			}
		}
	}
	return 0;
}