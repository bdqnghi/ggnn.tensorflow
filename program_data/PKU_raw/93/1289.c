//****************************
//*???:5.cpp               *
//*??:??                  *
//*????:2013?10?3?     *
//*????:??3,5,7????  *
//****************************
int main()  //???
{
	int n, a, b, c;
	cin >> n;
	a = n % 3;
	b = n % 5;
	c = n % 7;
	if ( a==0 )
		if ( b==0 )
			if ( c==0 )
				cout << "3 5 7";
			else
				cout << "3 5";
		else
			if ( c==0 )
				cout << "3 7";
			else
				cout << "3";
	else
		if ( b==0 )
			if ( c==0 )
				cout << "5 7";
			else
				cout << "5";
		else
			if ( c==0 )
				cout << "7";
			else
				cout << "n";
	return 0;
}
