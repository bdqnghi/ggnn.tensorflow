int main()
{
	int a[10000];
	int b[10000];
	int x;
	int min, max;
	
	cin >> a[0];
	
	x = 1;
	
	while(cin.get() != '\n')
	{
		cin >> a[x];
		x ++;
	}
	
	cin >> b[0];
	
	x = 1;
	
	while(cin.get() != '\n')
	{
		cin >> b[x];
		x ++;
	}
	
	min = 100000;
	max = 0;
	
	for(int i = 0; i <= x; i++)
	{
		if(a[i] < min)
		min = a[i];
		
		if(b[i] > max)
		max = b[i];
	}
	
	int maxcount = 0;
	
	for(int i = min; i <= max; i ++)
	{
		int count = 0;
		
		for(int j = 0; j <= x; j ++)
		{
			if(a[j] <= i && i < b[j])
			{
				count ++;
			}
			
			else
			continue;
			
			if(count > maxcount)
			maxcount = count;
			
		}
	}
	
	cout << x << " " << maxcount;
	
	return 0;
}