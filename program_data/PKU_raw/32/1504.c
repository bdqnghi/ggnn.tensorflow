//********************************
//*????????   **
//*?????? 1300012745 **
//*???2013.11.19  **
//********************************
int main()
{
	char stra[102], strb[102];
	int n, num1[102] = {0}, num2[102] = {0}, num[102] = {0}, i, lena, lenb, j, k;
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		cin.get();
		cin.getline(stra,102);
		cin.getline(strb,102);
		lena = strlen(stra);
		lenb = strlen(strb);
		memset(num1,0,sizeof(num1));
		memset(num2,0,sizeof(num2));
		memset(num,0,sizeof(num));
		k = 0;
		for (j = lena - 1; j >= 0; j--)
		{
			num1[k++] = stra[j] - '0';
		}
		k = 0;
		for (j = lenb - 1; j >= 0; j--)
		{
			num2[k++] = strb[j] - '0';
		}
		for (j = 0; j < 102; j++)
		{
			num1[j]-=num2[j];
			if (num1[j] < 0)
			{
				num1[j]+=10;
				num1[j + 1]--;
			}
		}
		j = lena;
		while (num1[j] == 0)
			j--;
		for (k = j; k >= 0; k--)
			cout << num1[k];
		cout << endl;
	}
	return 0;
}






		

