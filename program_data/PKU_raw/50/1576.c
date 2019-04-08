
int main()
{
	int w , i ,days = 12;
	scanf("%d" , &w);
	for ( i = 1 ; i <= 12 ; i ++)
	{
		if ( i == 1)
			days += 0;
		else if ( i == 3 )
			days += 28;
		else if ( i == 5 || i == 7 || i == 10 || i == 12 )
			days += 30;
		else days += 31;

		if ((days+w-5)%7 == 0)
			printf("%d\n" , i);
	}

	return 0;
}