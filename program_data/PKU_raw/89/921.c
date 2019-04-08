int main ()
{
	int n, i, counta, countb, person1[50000], person2[50000];
	int flag = 0;
	int *Person1, *Person2;
	cin >> n;
	for ( Person1 = person1, Person2 = person2; ; Person1 ++, Person2 ++ )
	{
		cin >> *Person1 >> *Person2;
		if ( *Person1 == 0 && *Person2 == 0 )
			break;
	}
	for ( i = 0; i < n; i ++ )
	{
		counta = 0;
		countb = 0;
		for ( Person1 = person1, Person2 = person2; ; Person1 ++, Person2 ++ )
		{
			if ( *Person1 == 0 && *Person2 == 0 )
				break;
			if ( *Person1 == i )
				counta ++;
			if ( *Person2 == i )
				countb ++;
		}
		if ( counta == 0 && countb == n - 1 )
			cout << i << endl;
	}
	return 0;
}

