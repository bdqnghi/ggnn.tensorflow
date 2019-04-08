//*****************************
//*  ???????????   *
//*  ?  ?????           *
//*  ?  ??1000012738       *
//*  ?  ??2010.12.21.      *
//*****************************

int main()
{
	char str[101], convert[101];          // ????????
	cin.getline(str, 101);                // ?????
	int length = strlen(str);             // ????
	int i;                                // ??????
	for(i = 0; i < length - 1; i++)       // ?????????
	{
		convert[i] = str[i] + str[i + 1]; // ????
	}
	convert[i] = str[0] + str[i];         // ????
	for(i = 0; i < length; i++)
	{
		cout << convert[i];               // ??
	}
	cout << endl;
	return 0;
}