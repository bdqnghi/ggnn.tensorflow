int powe( int i )//??? 
{
	int j = 0 , sum = 1;
	if( i > 0 )
		for( j = 0 ; j <= i - 1 ; j ++ )
			sum = sum * 10;
	return sum;
}
int main()
{
	char ch[50];
	cin.get( ch , 50 , '\n' );
	int num[50] = {0};
	char *p;
	int i = 0 , counter = 0;
	for( p = ch ; *p != '\0' ; p )
	{
		if( *p < '0' || *p > '9' )
			p ++;

		else if( *p >= '0' && *p <= '9' )
		{
			int weishu = 0;
			while( *p >= '0' && *p <= '9' && *p != '\0' )//?????????? 
			{
				p ++;
				weishu ++;//?????? 
			}
			for( i = 1 ; i <= weishu ; i ++ )
				num[counter] = num[counter] + ( *( p - i ) - '0') * powe(i - 1);
			counter ++;
			continue;
		}
	}
	for( i = 0 ; i <= counter - 1 ; i ++ )
		cout << num[i] << endl;
	return 0;
}
