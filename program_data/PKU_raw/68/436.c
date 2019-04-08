void main()
{
	long prime(long);
	long x,y,t;
	long i;
	scanf("%ld",&x);
	for(t=6;t<=x;t++,t++)
    for(i=3;i<=t/2;i++,i++)
	{
	int flag1=1,j;
	for(j=3;j<=sqrt(i)&&flag1==1;j++,j++)
	{
		if(i%j==0)
			flag1=0;
	}
	if(flag1)
			y=t-i;
	int flag2=1,k;
	for(k=3;k<=sqrt(y)&&flag2==1;k++,k++)
	{
	if(y%k==0)
	flag2=0;
	}
	if(flag2)		
	{
		printf("%ld=%ld+%ld\n",t,i,y);
		break;
	}
	}
}