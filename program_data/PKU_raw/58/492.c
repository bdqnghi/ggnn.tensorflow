int avoid(char as[]);
int main()
{
	int n, i, num;
	char str[10000][81];
	cin >> n;
	cin.get();
	for( i = 0; i < n; i ++ )
	{
		cin.getline(str[i], 81);
		if( str[i][0] == '_' )
		{
			num = avoid(str[i]);
			cout << num << endl;
		}
		if( str[i][0] != '_' )
		{
			if((str[i][0] - 'a' >= 0 && str[i][0] - 'a' <= 25) ||
			   (str[i][0] - 'A' >= 0 && str[i][0] - 'A' <= 25) )
			{
				num = avoid(str[i]);
				cout << num << endl;
			}
			else
				cout << 0 << endl;
		}
	}
	return 0;
}
int avoid( char as[] )
{
	int len; 
	len = strlen(as);
    int j, t;
    for( j = 1; j < len; j ++ )
	{
		if((as[j] - 'a' < 0 || as[j] - 'a' > 25) &&
	       (as[j] - 'A' < 0 || as[j] - 'A' > 25) && 
	       (as[j] - '0' < 0 || as[j] - '0' > 9 ) &&
	       (as[j] != '_') )
		{
			t = 0;
			break;
		}
	}
    if( j == len )
         t = 1;
    return (t);
}