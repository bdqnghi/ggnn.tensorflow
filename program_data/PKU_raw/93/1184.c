int main ()
{
	int n ;
	cin >> n ;
	if ( n%3 == 0&& n%5 == 0)
		{
			if (n%7== 0)
				cout << "3 5 7" <<endl;
			else cout << "3 5"<<endl;
		}
	else if (n%3 != 0&& n%5 != 0)
	{
		if (n%7== 0)
				cout << "7" <<endl;
		else cout << 'n'<<endl;
	}
	else if (n%3 == 0&& n%5 != 0)
		{
			if (n%7== 0)
				cout << "3 7" <<endl;
			else cout << "3"<<endl;
		}
	else if (n%3 != 0&& n%5 == 0)
		{
			if (n%7== 0)
				cout << "5 7" <<endl;
			else cout << "5"<<endl;
		}
	return 0;
}