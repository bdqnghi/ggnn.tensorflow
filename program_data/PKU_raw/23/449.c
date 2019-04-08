/*
 * homework2.cpp
 *
 *  Created on: 2012-11-10
 *      Author: Lixurong
 */


int main()
{
	char a[100][100];
	int i=0;
	while( cin >> a[i] )//????
	{
		char c;
		cin.get(c);
		if( c=='\n' )//????????????
			break;
		i++;
	}
	for( i-1; i>=0; i-- )//????
	{
		cout << a[i];
		if( i!=0 )
			cout << " ";
	}
	return 0;
}