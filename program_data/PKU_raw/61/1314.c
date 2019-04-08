int main()
{
	int n, i, order[21], total_number;
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		cin >> order[i];
        int Rabbit_Amount (int x);
        total_number = Rabbit_Amount(order[i]);
		cout << total_number << endl;
	}
	return 0;
}

int Rabbit_Amount (int x)
{
	int f1, f2, f;
	f1 = 1;
	f2 = 1;
	if ((x == 1) || (x == 2))
	{
		f = 1;
	}
	else
	{
		for (int j = 1; j <= x - 2; j++)
		{
			f = f1 + f2;
			f1 = f2;
			f2= f;
		}
	}
	return f;
}



	
    
	

