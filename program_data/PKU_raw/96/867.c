int main ()
{
	char ch[100] = {0};
	char shang[100] = {0};
	cin >> ch;
	int now = 0;
	for ( int i = 0, j = 0; i < strlen(ch); i ++, j ++ )
	{
		now = now * 10 + ch[i] - '0';
		if ( j == 0 && now/13 == 0 ) j--;
		else shang[j] = now/13 + '0';
		now = now%13;
	}
	if ( shang[0] == 0 ) cout << "0" << endl;
	else cout << shang << endl;
	cout << now;
	return 0;
}