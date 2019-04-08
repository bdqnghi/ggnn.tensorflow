int main()
{
	int x , a , b , c ;
	cin >> x ;
	a = x % 3;
	b = x % 5;
	c = x % 7;
	if ( a == 0 && b == 0 && c ==0 )
    {
		cout << "3 5 7" ;
	}
	else
	{
	 if ( a == 0 )
	 {
	        if ( b == 0)
				cout << "3 5" ;
	 
			else 
			{
				if ( c == 0 )
					cout << "3 7" ;
				else
					cout << "3" ;
			}
     }
	 else
	 {
					if ( b == 0 )
					{
						if ( c == 0)
							cout << "5 7" ;
						else
							cout << "5" ;
					}
				    else
					{
							if ( c == 0)
								cout << "7" ;
							else
								cout << "n" ;
					}
	 }
	}
	return 0;
}