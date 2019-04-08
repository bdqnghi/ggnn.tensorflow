
int main()
{
	char a[101] ;
	int i, j = 0, b, s[100], y ;
	cin.getline(a, 100) ;
	while(a[j] != '\0')
	{
		j++ ;
	}
	if(j == 1)
	{
		y = (a[0] - '0') % 13 ;
		s[0] = 0;
		cout << s[0] << '\n' << y << endl ;
	}
	else
	{
		y = ((a[0] - '0') * 10 + (a[1] - '0')) % 13 ;
		s[0] = ((a[0] - '0') * 10 + (a[1] - '0')) / 13 ;
		for(i = 1 ; i < j - 1 ; i++)
		{
			b = y * 10 + (a[i+1] - '0') ;
			s[i] = b / 13 ;
			y = b % 13 ;
		}
		if(j <= 2)
			cout << s[0] << endl;
		if(s[0] != 0 )
		{
			if(j > 2)
				cout << s[0] ;
		}
		for(i = 1 ; i < j - 1 ; i++)
		{
			if(i == j - 2)
				cout << s[i] << endl ;
			else
				cout << s[i] ;
		}
		cout << y << endl ;
	}
	
	return 0 ;
}


