int main ( )
{
	int i, j, n = 0, year = 0, month1 = 0, month2 = 0, num = 0,
		a[12] = {31, 0, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int min(int x, int y);
	int max(int x, int y);
	cin >> n;
	for(i = 0;i < n;i++)
	{
		num = 0;
		cin >> year >> month1 >> month2;
		if((year % 400 == 0)||((year % 100 != 0)&&(year % 4 == 0)))/*????*/
			a[1] = 29;
		else a[1] = 28;
		for(j = min(month1, month2)-1;j < max(month1, month2)-1;j++)/*???????????*/
			num += a[j];
		if(num % 7 == 0)
			cout << "YES" << endl;
		else cout <<"NO"<<endl;
	}
	return 0;
}
int min (int x, int y)/*?????*/
{
	if(x > y)
		return(y);
	else return(x);
}
int max(int x, int y)/*?????*/
{
	if(x > y)
		return(x);
	else return(y);
}