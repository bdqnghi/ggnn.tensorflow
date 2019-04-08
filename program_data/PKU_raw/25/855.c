int main ()
{
	char ch[50] = {'1'};
	for ( int i = 1; i < 50; i ++ )
		ch[i] = '0';
	int n;
	cin >> n;
	int temp = 0;
	for ( int i = 1; i <= n; i ++ )
	{
		for ( int j = 0; j < 50; j ++ )
		{
			ch[j] = (ch[j]-'0')*2+temp;
			if ( ch[j] > 9 )
			{
				temp = 1;
				ch[j] = ch[j] - 10 + '0';
			}
			else
			{
				temp = 0;
				ch[j] = ch[j] + '0';
			}
		}
	}
	for ( int i = 49; i >= 0; i -- )
	{
		if ( ch[i] != '0' )
		{
			temp = i;
			break;
		}
	}
	for ( int i = temp; i >= 0; i -- )
		cout << ch[i];
	return 0;
}