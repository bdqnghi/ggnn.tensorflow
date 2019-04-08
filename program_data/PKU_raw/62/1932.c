int main()
{
	char str[1000];
	int i = 1, l, j;
	cin.getline( str, 1000, '\n' );
	l = strlen(str);
	while ( str[i] != '\0' )
	{
		if ( str[i - 1] == ' ' && str[i] == ' ' )
		{
			for ( j = i; j < l - 1; j++ )
			{
				str[j] = str[j + 1];
			}
			l--;
		}
		else
			i++;
	}
	for ( i = 0; i < l; i++ )
		cout << str[i];
	return 0;
}