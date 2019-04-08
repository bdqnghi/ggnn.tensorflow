int main ()
{
	int n , i , j;
	i = 0;
	char a[9] , ch;
	while ((ch = cin.get()) != '\n' )
	{
		a[i] = ch ;
		i = i + 1;
	}
	i = i - 1;
	while (i >= 0)
	{
		cout << a[i] ;
		i = i - 1;
	}
	cout << endl ;
	return 0;
}
		