//
// ????3.cpp
// ?????13 
// ?????? 1200012943
// ??:2012.11.15
//
int main()
{
	int i, r = 0;
    char num[100];
	int quotient[100];
    cin >> num;  //??????

    for (i = 0; num[i] != '\0'; i++)  //???????????
	{
		quotient[i] = (r * 10 + num[i] - '0') / 13;  //???
        r = (r * 10 + num[i] - '0') % 13;  //????
	}
	if (num[1] == '\0' || num[2] == '\0' && num[0] - '0' == 1 && num[1] - '0' < 3)
		cout << 0;
	else if(quotient[1] == 0)
		{
			for (i = 2; num[i] != '\0'; i++)
				cout << quotient[i];
		}
	else
		{
			for (i = 1; num[i] != '\0'; i++)
				cout << quotient[i];
		}
	cout << endl;
	cout << r << endl; 
    return 0;
}