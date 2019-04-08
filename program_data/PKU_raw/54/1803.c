int n, k;
int apple[1000];

int divide(int monkey)
{
	if(monkey == 0)
	{
		apple[0] += n * (n - 1);
		return divide(1);
	}
	else
	{
		apple[monkey] = apple[monkey - 1] * n / ( n - 1 ) + k;
		if(monkey == n - 1)
			return apple[monkey];
		else
		{			
			if (apple[monkey] % (n - 1) == 0)
				return divide(monkey + 1);
			else
				return divide(0);
		}		
	}
}

int main()
{	
	cin >> n >> k;
	apple[0] = k + (n - 1 - k) * n;
	if(n <= 1)
		cout << k;
	else
	cout << divide(0);
	return 0; 
}
