int judge1(int year)
{
	if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		return 1;
	else
		return 0;
}
int judge2(int y1,int m1,int d1, int y2, int m2, int d2)
{
	if(y1 < y2)
		return -1;
	else if(y1 > y2)
		return 1;
	else
	{
		if(m1 < m2)
			return -1;
		else if(m1 > m2)
			return 1;
		else
		{
			if(d1 < d2)
				return -1;
			else if(d1 > d2)
				return 1;
			else
				return 0;
		}
	}
}
int main()
{
	int a[13] ={0,31,28,31,30,31,30,31,31,30,31,30,31} ;
	int b[13] ={0,31,29,31,30,31,30,31,31,30,31,30,31} ;
	int y1, m1, d1;
	int y2, m2, d2;
	cin >> y1 >> m1 >> d1;
	cin >> y2 >> m2 >> d2;
	int sum = 0;
	for(int i = y1 + 1; i <= y2 - 1; i++)
	{
		if(judge1(i) == 1)
			sum += 366;
		else
			sum += 365;
	}
	if(y1 != y2){
	for(int i = m1 + 1; i <= 12; i++)
		if(judge1(y1) == 1)
			sum += b[i];
		else
			sum += a[i];
	for(int i = 1; i <= m2 - 1; i++)
		if(judge1(y2) == 1)
			sum += b[i];
		else
			sum += a[i];}
	if(y1 ==y2 && m1 == m2)
	{
		sum += d2 - d1;
	}
	else{
	sum += d2;
	if(m1 != 2)
		sum += a[m1] - d1;
	else
	{
		if(judge1(y1) == 1)
			sum += 29 - d1;
		else
			sum += 28 - d1;
	}
	}
	cout << sum << endl;
	return 0;
}