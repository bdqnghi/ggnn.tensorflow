//*????1000012912_002.cpp
//*??????
//*?????2010.11.17
//*???????????????
int main()
{
	int flag, t, i, j, k, len;             
	char letter[100000];                       
	cin >> t;
	for ( i = 0; i < t; i ++ )
	{
		cin >> letter;
		len = strlen(letter);
		for ( j = 0; j < len; j ++ )
		{
			flag = 1;
			if ( letter[j] != 0 )
			{
				for ( k = j + 1; k < len; k ++ )
					if ( letter[j] == letter[k] )           //???????
					{
						flag = 0;
						letter[k] = 0;		
					}
				if ( flag!= 0 )                             //?????????
				{
					cout << letter[j] << endl;
					break;
				}
			}
		}
		if ( j == len )                                     //??????????
			cout << "no" << endl;
	}
	return 0;
}