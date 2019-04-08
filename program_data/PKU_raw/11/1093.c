
int main()
{
	int day = 0, y, m, d,i, month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	cin >> y >> m >> d;
	if(y % 400 == 0 || (y % 100 != 0 && y % 4 == 0))
		month[2] = 29;
	for(i = 1; i < m; i++)
		day += month[i];
	day += d;
	cout << day;


	return 0;
}
		
