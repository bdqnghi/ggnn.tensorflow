
int main()
{
	int x;
	cin >> x;
	if (x % 3 == 0)  
	{   
		cout << 3;
		if (x % 5 == 0) cout << " " << 5;
		if (x % 7 == 0) cout << " " << 7;
	}
	else if (x % 5 == 0) 
    {
  	    cout << 5 ;
        if (x % 7 == 0) cout << " " << 7;
	}
		else if (x % 7 == 0) cout << 7 ;	 
	else cout << "n";
    return 0;
}