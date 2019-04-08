// ????.cpp : Defines the entry point for the console application.
//


void out();
char num[501];

int main()
{

	cin.getline( num + 1,501);

	out();

	return 0;

}

void out()
{
	int i = 0;
	int leng = 0;
	int t = 0;
	int m = 0;
	int k = 0;
	int panduan = 0;

	int len = 0;
	len = strlen( num + 1 );

	for( leng = 2;leng <= len;leng++ )
	{
		m = leng / 2 ;
		for( i = 1;i <= len - leng + 1;i++ )
		{
			panduan = 0;
			k = i + leng;
			for( t = i;t < i + m;t++ )
			{
				k --;
				if( num[t] != num[k] )
				{
					panduan = 1;
					break;
				}
			}

			if( panduan == 0 )
			{
				for( t = i;t < i + leng;t++ )
					cout << num[t];
				cout << endl;
			}

		}

	}

}






