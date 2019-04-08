//********************************
//*???? ??(13.8) ????
//********************************

int main()
{
	int n,i,nu,au,M,m;
	int num[26] = {0};
	int no[26][999];
	char aut;
	cin >> n;
	for(i = 0; i < n; i++)
	{
		cin >> nu;
		cin.get();
		aut = cin.get();
		while (aut != 10)
		{
			au = (int)(aut - 'A');
			no[au][num[au]] = nu;
			num[au]++;
			aut = cin.get();
		}
	}
	M = 0;
	for(i = 0; i < 26; i++)
	{
		if(M < num[i])
		{
			M = num[i];
			m = i;
		}
	}
	cout << (char)(m + 'A') << endl;
	cout << M << endl;
	for(i = 0; i < M; i++)
		cout << no[m][i] << endl;
	cin.get();
    cin.get(); //????
	return 0;
}
