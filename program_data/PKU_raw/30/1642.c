int main()

{
	int n, num, figure, delta, sum;
	cin >> n;
	sum = 0;
	for(int i = 1; i <= n; i++)
	{
		num = i;
		if(num % 7 == 0)
		{	
			delta = 0;
		}
		else
		{
			while(num > 0)
			{
				figure = num % 10;
				if(figure == 7)
				{
					delta = 0;
					num = 0; 
				}
				else
				{
					num = num / 10;
					delta = 1;
				}
			}
		}
		
		if(delta == 1)
			sum = sum + i * i;
	}
	cout << sum << endl;
	return 0;
}