
char s[100] = {0};

void cal()
{
	int len = strlen(s);
	int num[100] = {0};
	for(int i  = 0; i < len; i++)
	{
		num[i] = s[i] - '0';
	}
	for(int i = 0; i < len; i++)
	{
		num[i] *= 2;
	}
	for(int i = 0; i < len; i++)
	{
		if(num[i] > 9)
		{
			num[i + 1] +=num[i] / 10;
			num[i] %= 10;
		}
	}
	if(num[len] == 0)
	{
		for(int i = 0; i < len; i++)
		{
			s[i] = (char)(num[i] + '0');
		}
	}
	else
	{
		for(int i = 0; i <= len; i++)
		{
			s[i] = (char)(num[i] + '0');
		}
	}
}
int main() {
	int n;
	cin >> n;
	s[0] = '1';
	for(int i = 0; i < n; i++)
		cal();
	int l = strlen(s);
	for(int i = l - 1; i >= 0; i--)
	{
		cout << s[i];
	}
	cout << endl;
	
	return 0;
}