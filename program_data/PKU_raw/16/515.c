int main()
{
	int x,a;
	cin >> x;
	if (x == 0)
		cout << "0";
	else
	{
	    while (x != 0)
	    {
		    a = x % 10;
		    x = x / 10;
		    cout << a;
	    }
	}
	cin.get();
    cin.get(); //????
	return 0;
}