
void turn(int number);

int main()
{
	int n;
	cin >> n;
	turn(n);
        cout << "End";

	return 0;
}
void turn(int number)
{
	if(number != 1)
	{	
		if(number % 2 == 0)
		{
			cout << number << "/2=" ;
			number = number / 2 ;
			cout << number << endl ;
		}
		else
		{
			cout << number << "*3+1=" ;
			number = number * 3 + 1 ;
			cout << number << endl ;
		}
		turn(number);
	}
	return ;
}
		

