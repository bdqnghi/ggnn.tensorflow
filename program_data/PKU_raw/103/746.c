//********************************
//*???2.cpp   **
//*?????? 1200012768 **
//*???2012.12.18  **
//*?????????  **
//********************************
int main()
{
	char ch[1001];
	int c1 = 1, c2 = 1, i, temp = -1;
	cin >> ch;
	int len = strlen(ch);
	int num[len];
	for (i = 0; i < len; i++)
		if (ch[i] <= 'Z')
			num[i] = ch[i] - 'A';
		else
			num[i] = ch[i] - 'a';
	for (i = 0; i < len; i++)
	{
		if (temp == -1)
		{
			temp = num[i];
			if (i == len - 1)
				cout << "(" << (char)(temp + 65)<< "," << c1 << ")";
		}
		else if (num[i] == temp)	
		{
			c1++;
			if (i == len - 1)
				cout << "(" << (char)(temp + 65)<< "," << c1 << ")";
		}
		else
		{
			cout << "(" << (char)(temp + 65)<< "," << c1 << ")";
			c1 = 1, temp = num[i];
			if (i == len - 1)
				cout << "(" << (char)(temp + 65)<< "," << c1 << ")";
		}
	}
	return 0;
}
