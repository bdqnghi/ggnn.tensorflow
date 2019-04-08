
int main()
{
	int n, i,  k;
	double t;
	double b[300] = {0};
	double a[300];
	cin >> n;
	double num, sum = 0;
	for (i = 0; i < n; i++)
	{
		cin >> a[i];
		sum = sum + a[i];
	}
	
	num = sum / n;
	double max = 0;
	
	for (i = 0; i < n; i++)
	{
		if (fabs(num - a[i]) > max)
		{
			max = fabs(num - a[i]);
			
		}
	}
	int j = 0;
	for (i = 0; i < n; i++)
	{	
		double cha = fabs(num - a[i]);
		if (cha - max == 0 )
		{  
			b[j] = a[i]; 
			j++;
		}
	}
	
	for (i = 0; i < j - 1; i++)
		for (k = 0; k < j-i-1; k++)
		{
			if (b[k] > b[k+1])
			{
				t= b[k];
				b[k] = b[k+1];
				b[k+1] = t;
			}
		}
	
	for (i = 0; i < j-1; i++)
		cout << b[i]<<",";
	cout << b[j-1];
	return 0;
	}