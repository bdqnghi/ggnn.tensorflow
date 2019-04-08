int sushu(int n)
{
	int i,j;
	double h;

	if(n==2) return 1;
	h=sqrt(n)+1;
	j=(int)h;
	for(i=3;i<=j;i=i+2)
	{
		if(n%i==0) 
		return 0;
	}
	return 1;
}
int main()
{
	int n,i;
	int m;
	scanf("%d",&n);
	for(i=6;i<=n;i=i+2)
	{
		for(m=3;m<=i/2;m=m+2)
		{	if(sushu(m)&&sushu(i-m))
			{
				printf("%d=%d+%d\n",i,m,i-m);
				break;
			}
		}
	}
	return 0;

}
