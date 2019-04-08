int p(int x)
{
	int i,sgn=0;
	for(i=3;i*i<=x;i+=2)
		if(x%i==0)
		{
			sgn=1;
			break;
		}
		return(sgn);
}
int main()
{
	int n,i,j;
	scanf("%d",&n);
	for(i=6;i<=n;i+=2)
		for(j=3;j*2<=i;j+=2)
		{
			if(p(j)==0&&p(i-j)==0)
			{
				printf("%d=%d+%d\n",i,j,i-j);
				break;
			}
		}
	return 0;
}