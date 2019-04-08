
int main()
{
	int a, b, i, j, k, s;

	cin >> a;
	s = 0;
	for(i = 1;i <= a;i ++)
	{
		k = 0; 
		if(i % 7 == 0)
			k ++;
		b = i;
		while(b != 0)
		{
			j = b % 10;
			if(j == 7)
				k ++;
			b = b / 10;
		}
		if(k == 0)
			s = s + i * i;
	}
	cout << s << endl;

	return 0;
}