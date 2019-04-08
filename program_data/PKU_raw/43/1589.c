int main()
{
	int prime(int);
	int n,i;
	scanf("%d",&n);
	for(i=2;i<=n/2;i++)
		if(prime(i)&&prime(n-i))
			printf("%d %d\n",i,n-i);

}

int prime(int n)
{
	int i,a=1;
	for(i=2;i<=sqrt(n)&&a==1;i++)
		if(n%i==0)
			a=0;
	return(a);
}