int main()
{
	long long year, month, day;
	cin >> year >> month >> day;
	long long a[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	char week[7][6] = { "Sun.", "Mon.", "Tue.", "Wed.", "Thu.", "Fri.", "Sat." }; 
	long long num = 0;
	long long mod =( year / 100 ) % 4 ;
	//cout << mod << " ";
	num = year / 4 - (year/100 - mod) * 3 / 4 - mod;
	//cout << num << " ";
	if ( year % 4 == 0 && year % 100 != 0 || year % 400 == 0 )
	{
		num --;
		a[2] = 29;
	}
	//cout << num << " ";
	long long sum = 0;
	sum = sum + num * 366 + ( year - num - 1 ) * 365;
	//cout << sum << " ";
	for( int i = 1; i < month; i++)
	{
		sum = sum + a[i];
	}
	//cout << sum << " ";
	sum = sum + day;
	//cout << sum << " ";
	sum = sum % 7;
	//cout << sum << " ";
	cout << week[ sum ] << endl;
	return 0;
}