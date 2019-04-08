int main()
{
	int i, len;
	char str[40], *q;
	cin.getline(str, 40);
	len = strlen(str);
	q = str;
	for( i = 0; i < len; i++ )
	{
		if( *(q + i) - '0' >= 0 && *(q + i) - '0' <= 9 )
		{
			cout << *(q + i);
			if( *(q + i + 1) - '0' < 0 || *(q + i + 1) - '0' > 9 )
				cout << endl;
		}
	}
	return 0;
}