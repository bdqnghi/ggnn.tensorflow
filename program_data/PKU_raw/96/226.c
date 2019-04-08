int main()
{
	char number[100];
	int i, toDevide, tell = 0;
	cin >> number;
	toDevide = number[0] - '0';
	for(i = 1; number[i] != '\0'; i++)
	{
		toDevide = toDevide * 10 + number[i] - '0';
		if(i > 1 || toDevide / 13 != 0)
	         {
                            cout << toDevide / 13;
                            tell++;
                   }
		toDevide %= 13;
	}
         if ( tell == 0) 
              cout << '0';
	cout << endl << toDevide << endl;
	return 0;
}