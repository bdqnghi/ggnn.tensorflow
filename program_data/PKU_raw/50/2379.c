

int main( void )
{
	int month_days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	int day, i;
	int sum=0;
	cin>>day;
	for (i=0;i<12;i++)
	{
		if ((sum+12 + (day-5))%7 == 0)
			cout<<i+1<<endl;
		sum+=month_days[i];
	}

	return 0;
}