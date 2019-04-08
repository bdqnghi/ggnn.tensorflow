int minnum(int n,int k)
{
	int i=1;
	double a;
	while(1)
	{
		int x=1;
		a=i*n+k;
		while(x<n)
		{
			a=a*n/(n-1)+k;
			x++;
			if((int)a!=a){
				break;
			}
		}
		i++;
		if((long)a==a){
			break;
		}
	}
	return a;
}
int main()
{
	int n,k;
	scanf("%d %d",&n,&k);
	int sum;
	sum=minnum(n,k);
	printf("%d\n",sum);
	return 0;
}