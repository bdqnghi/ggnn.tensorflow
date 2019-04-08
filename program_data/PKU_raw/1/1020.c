int sum = 0;
void f(int a,int s)
{
	int i;
	if(a == 1)
		sum++;
	else
	{

		for(i = s; i <= a; i++)
		{
			if(a % i == 0)
				f((a / i),i);
		}
	}
	return;
}


int main()
{
	int n, num, j;
	cin >> n;
	for (j = 1; j <= n; j++)
	{
		cin >> num;
		f(num,2);
		printf("%d\n",sum);
		sum = 0;
	
	}
	return 0;
}
