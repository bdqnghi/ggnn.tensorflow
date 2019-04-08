int main()
{
	int i, j, len, count = 0, n;
	char a[101];
	cin.getline(a,101);
	len = strlen(a);
	for ( j = 0, i = 0; i < len; i++ )
		if ( (a[i] != ' ') || (( a[i] ==' ') && ( a[i+1] != ' ')))
			{
				a[j++] = a[i];
		}
		n = j;
	for ( j = 0; j < n; j++ )
	cout<<a[j];
		return 0;
}
