//************************************************************
//* ???????3?5?7????.cpp                        *
//* ??????????????????3?5?7??          *
//* ?    ?????                                         *
//* ?    ??2013.9.29                                      *
//************************************************************
int main()
{
	int num ;

	cin >> num ;

	if (num % 3 == 0 )
	{
		if (num % 5 == 0 ||num % 7 == 0)
		{
			cout << 3 << " " ;
	        if (num % 5 == 0 && num % 7 == 0)
		        cout << 5 << " " << 7 << endl ;
		    else 
			{
		    	if (num % 5 == 0 && num % 7 != 0)
			        cout << 5 << endl ;
			    else
			    	cout << 7 << endl ;
			}
		}
	    if (num % 5 != 0 && num % 7 != 0)
		    cout << 3 << endl ;
	}
	else 
		if (num % 5 == 0 ||num % 7 == 0)
		{
			if (num % 5 == 0 && num % 7 == 0)
		        cout << 5 << " " << 7 << endl ;
		    else 
			{
		    	if (num % 5 == 0 && num % 7 != 0)
			        cout << 5 << endl ;
			    else
			    	cout << 7 << endl ;
			}
		}
		else  cout << "n" << endl ;

	return 0 ;
}
