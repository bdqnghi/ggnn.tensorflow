
int main()
{
	int i,l,j = 0;
	char a[150],b[150];
	while(cin.getline(b,150)){
	l = strlen(b);
	for ( i = 0; i < l; i ++ )
	{
		cout<<b[i];
		if (b[i] == '(')  a[i] = b[i];//???????????????
		else if ( b[i] == ')' ) a[i] = b[i];
		else a[i] = ' ';
	}
	cout << endl;
	if ( a[l-1] == '(' )  a[l-1] = '$';
	for ( i = l - 1; i >= 0; i -- )//????????
	{
		if ( a[i] == '(')//?????????????????
		{
			for ( j = i + 1 ; j < l ; j ++ )
			{
				if (a[j] == ')') 
				{
					a[i] = ' ';
					a[j] = ' ';
					break;
				}
			}
			if ( j == l)   a[i] = '$';//??????????????????$
		}
	}
	for ( i  = 0; i < l; i ++)
	{
		if ( a[i] == ')' )  a[i] = '?';//????????????
	}
	for ( i = 0; i < l; i ++) cout<< a[i];
	cout << endl;
         }
	return 0;
}