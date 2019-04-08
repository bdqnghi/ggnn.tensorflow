int main()
{
	void print(int n);
	int n;
	scanf("%d",&n);
	print(n);
	return 0;
}

void print(int n)
{
	if(n<10)
		printf("%d",n);
	else
	{
		printf("%d",n%10);
		print(n/10);
	}
}