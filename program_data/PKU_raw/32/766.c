//****************************************************** 
//* ? ? ?   ??????                            *
//* ? ?      ????                                *
//* ? ? ? ??2010 ? 11 ? 17 ?                   * 
//* ? ?      ?1000012758                            *
//****************************************************** 
int main()
{
	int n, a[3][100] = {0}, size, m;
	char temp[101];
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		memset(a,0,sizeof(a));
		//Input & Convert
		for(int j = 0; j < 2; j++)
		{
			m = 99;
			do{
				cin.getline(temp,101);
			}while(temp[0] == '\0');
			size = strlen(temp);
			for (int k = size - 1; k >= 0; k--)
				a[j][m--] = temp[k] - 48;
		}
		//Minus
		for (int j = 99; j >= 0; j--)
		{
			a[2][j] = a[0][j] - a[1][j];
			if (a[2][j] < 0)
			{
				a[0][j - 1]--;
				a[2][j] += 10;
			}
		}
		//Output
		m = 0;
		for(int j = 0; j < 100; j++)
		{
			if (a[2][j])
				m = 1;
			if (m)
				cout << a[2][j];
		}
		cout << endl;
	}
	return 0;
}