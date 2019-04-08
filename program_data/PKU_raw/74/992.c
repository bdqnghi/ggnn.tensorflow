int reverse(long x)
{
	long t=x,r=0;
	while(t!=0)
	{
		r=10*r+t%10;
		t/=10;
	}
	if(r==x) return(1);
	else return(0);
}
int prime(long x)
{
	long i;
	for(i=2;i<=sqrt(x);i++)
		if(x%i==0)
			break;
	if(i>sqrt(x)) return(1);
	else return(0);
}
void main()
{
	long m,n,i,j=0;
	scanf("%ld%ld",&m,&n);
	for(i=m;i<=n;i++)
		if(reverse(i)&&prime(i))
		{
			j++;
			printf((j==1)?"%ld":",%ld",i);
		}
		if(j==0)
			printf("no");
}