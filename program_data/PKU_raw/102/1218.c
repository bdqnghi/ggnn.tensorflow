

int main()
{
	int n;
	double x;
	double a[40];
	double b[40];
	int counta = 0;
	int countb = 0;
	
	cin >> n;
	
	for(int i = 0; i < n; i ++)
	{
		char ch[10];
		
		cin >> ch >> x;
		
		if(ch[0] == 'm')
		{
			a[counta] = x;
			counta ++;
		}
		else
		{
			b[countb] = x;
			countb ++;
		}
	}
	
	
	
	
	for(int i = 0; i < counta - 1; i ++)
	for(int j = 0; j < counta - 1 - i; j ++)
	{
		if(a[j] > a[j + 1])
		{
			x = a[j];
			a[j] = a[j + 1];
			a[j + 1] = x;
		}
	}
	
	for(int i = 0; i < countb - 1; i ++)
	for(int j = 0; j < countb - 1 - i; j ++)
	{
		if(b[j] < b[j + 1])
		{
			x = b[j];
			b[j] = b[j + 1];
			b[j + 1] = x;
		}
	}	
	
	cout << fixed << setprecision(2);
	
	cout << a[0];
	
	for(int i = 1; i < counta ; i ++)
	cout << " " << a[i];
	
	for(int i = 0; i < countb ; i ++)
	cout << " " << b[i];
	
	
	return 0;
}