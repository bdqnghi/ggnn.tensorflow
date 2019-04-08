//   @ ?????.cpp
//   @ 1000012895
//   @ ???
//   @ 2010/11/17

int main()
{
	int n;
	cin >> n;
	char a[100], b[100];
	int inta[100], intb[100];
	int i, j, counta, countb, count0;
	for(i = 1; i <= n; i++)
	{
		cin >> a;
		cin >> b;
		for(counta = 0; a[counta] != '\0'; counta++)
			inta[counta] = a[counta] - '0';
		for(countb = 0; b[countb] != '\0'; countb++)
			intb[countb] = b[countb] - '0';
		for(j = counta - 1; j >= counta - countb; j--)
		{
			inta[j] = inta[j] - intb[j - counta + countb];
			if(inta[j] < 0)
			{
				inta[j] += 10;
				inta[j - 1]--;
			}
		}
		for(count0 = 0; inta[count0] == 0; count0++);
		for(j = count0; j < counta; j++)
			cout << inta[j];
		cout << endl;
		cin.get();
	}
	return 0;
}

