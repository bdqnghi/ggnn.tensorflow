int prime(int n)
{
	int i;
	if(n%2==0) return 0;
	for(i=3;i<=sqrt(n);i+=2)
		if(n%i==0)
			return 0;
	return 1;
}
void print(int n)
{
	int i;
	for(i=2;i<n-1;i++)
		if(prime(i)&&prime(n-i)){
			printf("%d=%d+%d\n",n,i,n-i);
			break;
		}
}

int main()
{
	int n,i;
	scanf("%d",&n);
	for(i=6;i<=n;i+=2)
		print(i);
	return 0;
}