int a[1000];
int main()
{
	int a[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
	int b[13] = {0,31,29,31,30,31,30,31,31,30,31,30,31};
	int y1, y2, m1, m2, d1, d2;
	cin >> y1 >> m1>> d1 >> y2 >> m2 >> d2;
	int i, count = 0, sum =0;

	if (y2 -y1 >= 2)
	{
		for (i = y1+1; i <= y2-1; i++)
		{
			if( (i % 4 == 0 && i % 100 != 0) || (i % 400 == 0) )
				count ++;
		}
	}
	if (y2 -y1 >=1)
	{
		if ( (y1 % 4 == 0 && y1 % 100 != 0) || (y1 % 400 == 0) ) 
		{
			if ( (y2 % 4 == 0 && y2 % 100 != 0) || (y2 % 400 == 0) ) 
			{
				for (i = m1 + 1; i <= 12; i++)
					sum = sum + b[i];
				for (i = 1; i <= m2 - 1 ; i++)
					sum = sum + b[i];
				sum = sum + (b[m1] - d1) + d2;
			}
			else  
			{
				for (i = m1 + 1; i <= 12; i++)
					sum = sum + b[i];
				for (i = 1; i < m2 ; i++)
					sum = sum + a[i];
				sum = sum + (b[m1] - d1) + d2;
			}
		}
		else 
		{
			if ( (y2 % 4 == 0 && y2 % 100 != 0) || (y2 % 400 == 0) ) 
			{
			
				for (i = m1 + 1; i <= 12; i++)
					sum = sum + a[i]; 
				for (i = 1; i < m2 ; i++)
					sum = sum + b[i];
				sum = sum + (a[m1] - d1) + d2;
			}
			else 
			{
			
				for (i = m1 + 1; i <= 12; i++)
					sum = sum + a[i];
				for (i = 1; i < m2 ; i++)
					sum += a[i];
				sum = sum + (a[m1] - d1) + d2;
			}
		}
	}

	if (y2 -y1 >=1)
	{
		sum = sum + count * 366 + (y2- y1 - 1 - count) * 365;
		cout << sum;
	}
	if  (y2 - y1 == 0)
	{
	if ( (y2 % 4 == 0 && y2 % 100 != 0) || (y2 % 400 == 0) ) 
	{
		for (i = m1 + 1; i <= 12; i++)
		sum = sum + b[i];
		for (i = 1; i <= m2 - 1 ; i++)
			sum = sum + b[i];
	sum = sum + (b[m1] - d1) + d2 - 366;
	}
	else
	{
		for (i = m1 + 1; i <= 12; i++)
					sum = sum + a[i];
				for (i = 1; i < m2 ; i++)
					sum += a[i];
				sum = sum + (a[m1] - d1) + d2 - 365;
			}
	cout << sum;
	}
	return 0;
}


	

