int isprime(int n)
{
	int i;
	for(i=2;i*i<=n;i++)
		if(n%i==0)
			return 0;
	return 1;
}

int main(int argc, char* argv[])
{
	int m,j;

	scanf("%d",&m);
	
	for(j=3;j*2<=m;j+=2)
		if(isprime(j)&&isprime(m-j))
			printf("%d %d\n",j,(m-j));

	return 0;
}