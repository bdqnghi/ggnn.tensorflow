void main()
{
	void put(int n);
	int n;
	scanf("%d",&n);
	
	put(n);
}

void put(int n)
{
	int t;
	if(n==1)
		printf("End");
	if(n%2==0)
	{
		t=n/2;
		printf("%d/2=%d\n",n,t);
		put(t);
	}
	if(n%2!=0&&n!=1)
	{
		t=n*3+1;
		printf("%d*3+1=%d\n",n,t);
		put(t);
	}
}

