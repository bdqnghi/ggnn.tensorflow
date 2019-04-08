char a[1000] ;
void huiwen(int) ;

int main()
{
	cin.getline (a , 1000) ;
	huiwen(2) ;
	return 0 ;
}

void huiwen (int x)
{
	if (x < strlen(a))
	{	
		int i , j , k ;
		for (i = 0 ; i < strlen(a) - x + 1 ; i++)
		{
			for (j = 0 ; j <= (x - 1) / 2 ; j++)
				if (a[i + j] != a[i + x - 1 - j]) break ;
			if (j == ( x - 1 ) / 2 + 1)
			{	
				for (k = i ; k <= i + x - 1 ; k++)
					cout << a[k] ;
				cout << endl ;
			}	
		}
		huiwen (x + 1) ;
	}
}