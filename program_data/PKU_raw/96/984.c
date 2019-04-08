//********************************
//*???? ??(12-11) ??13 
//********************************

int main()
{
	char a[105];
	char b[105];
	int i,yu,sh,lin,l;
	cin.getline (a,105);
	l = strlen(a);
	yu = 0;
	for(i = 0; i < l; i++)
	{
		lin = 10 * yu + (a[i] - '0');
		b[i] = lin / 13;
		yu = lin % 13;
	}
	if((l == 1) || ((l == 2) && (a[0] == '1') && (a[1] < '3')))
		cout << "0";
	else
	{
		if(b[1])
		{
			for(i = 1; i < l; i++)
				cout << (int)b[i];
		}
		else
		{
			for(i = 2; i < l; i++)
				cout << (int)b[i];
		}
	}
	cout << endl << yu << endl;
	cin.get();
    cin.get(); //????
	return 0;
}
