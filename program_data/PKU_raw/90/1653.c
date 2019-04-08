

int apple(int m, int n)
{
	
	if(m < 0)
	{
		return 0;
	}
	else if(m == 0 || n == 1 || m == 1)
	{
		return 1;
	}
	else
	{
		int a = apple(m, n-1) + apple(m-n, n); 
		return a;
	}

}
int main()
{
	int x, m, n;
	scanf("%d",&x);
	for(int i=0;i<x;i++)
	{
		scanf("%d", &m);
		scanf("%d", &n);
		int y;
		y = apple(m,n);
		printf("%d\n", y);
	}
	
} 
