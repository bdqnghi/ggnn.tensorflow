//***************************
//**???3.cpp
//**??????
//**???2013.12.11
//**?????n-gram????
//***************************

void exp(int a);
void pick();
int n;
char str[501];
int sumstr[499] = {0};
int flagstr[499] = {0};
int len;
int maximum = INT_MIN;

int main()
{
	cin >> n;
	cin.get();
	cin.getline(str, 501);
	len = strlen(str);
	exp(0);
	if (maximum <= 1)
		cout << "NO" << endl;
	else
		pick();
	return 0;
}
void exp(int a)
{
	if (a == len - n + 1)
		return;

	int *q = NULL;
	int flag;

	q = sumstr + a;
	for (int i = a; i <= len - n; i++)
	{
		flag = 0;
		for (int j = 0; j <= n - 1; j++)
		{
			if (*(str + i + j) == *(str + a + j))
				flag++;
			else
				break;
		}
		if (flag == n)
			(*q)++;
	}
	maximum = *q > maximum? *q: maximum;
	exp(a + 1);
}
void pick()
{
	char *p = NULL;
	int *q = NULL;

	p = str;
	q = sumstr;
	cout << maximum << endl;
	for (int i = 0; i <= len - n; i++)
		if (*(q + i) == maximum)
		{
			for (int j = 0; j <= n - 1; j++)
				cout << *(p + i + j);
			cout << endl;
		}
}