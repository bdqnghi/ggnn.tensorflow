char gram[1000][10] = {0};
int fre[1000] = {0};
int l, n;

int main ()
{
	void clear( int x );
	int i, j;
	int max = 0;
	int c = 1;
	
	int label[1000] = {0};
	char str[1000] = {0};
	char *p = str;
	char (*q1)[10] = gram; 
	char (*q2)[10] = gram;
	cin >> n;
	cin >> str;
	l = strlen( str );
	for ( i = 1; i <= l - n + 1; i++ )
	{
		for ( j = 0; j <= n - 1; j++ )
		{
			gram[i][j] = *p;
			p++;
		}
		p = p - n + 1;
	}
	q1++, q2++;

	for ( i = 1; i <= l - n + 1; i++ )
	{
		for (j = i+1; j <= l - n + 1; j++ )
		{
			if ( strcmp(*q1, gram[j] ) == 0 && i != j)
				fre[i]++, fre[j]++;
		}
		q1++;
	}

	for (i = 1; i <= l - n + 1; i++ )
	{
		if ( fre[i] > max )
			max = fre[i];
	}

	if ( max == 0 )
	{
		cout << "NO" << endl;
		return 0;
	}

	cout << max + 1 << endl;
	for ( i = 1; i <= l - n + 1; i++ )
	{
		if ( fre[i] == max )
		{
			cout << gram[i] << endl;
			clear(i);
		}
	}
	return 0;
}



void clear ( int x)
{
	int i, j;
	for ( i = 1; i <= l - n + 1; i++ )
	{
		if ( strcmp ( gram[x], gram[i] ) == 0 )
			fre[i] = 0;
	}
	return ;
}