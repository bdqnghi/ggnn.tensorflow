int m[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
int suan(int h, int d)
{
	int i;
	if(h == 1)
		return d;
	else
	{
		for(i = 1; i < h; i++)
			d += m[i];
		return d;
	}
}
int main()
{
	int a1,a2,b1,b2,c1,c2;
	int sum = 0;
	cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
	int i;
	if((a2 % 4 == 0 && a2 % 100 != 0) || a2 % 400 == 0)
	m[2] = 29;
	sum += suan(b2, c2);
	m[2] = 28;
	if((a1 % 4 == 0 && a1 % 100 != 0) || a1 % 400 == 0)
	m[2] = 29;
	sum -= suan(b1, c1);
	if(a1 == a2)
		cout << sum;
	else
	{
		for(i = a1; i < a2; i++)
		{
			if((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
				sum += 366;
			else
				sum +=365;
		}
		cout << sum;
	}
	return 0;
}