int process(void);
int main(void)
{
	int n;
	cin >> n;
	for(int i = 1; i <= n; i++)
		process();
	return 0;
}

int process(void)
{
	char str[105], tstr[105] = {0};
	cin >> str;
	int len = strlen(str);
	int count = 0;
	for(int i = 0; i < len; i++)
	{
		if(str[i] == '(') count++;
		else if(str[i] == ')') 
		{
			if(count > 0) count--;
			else tstr[i] = '?';
		}
	}
	count = 0;
	for(int i = len-1; i >= 0; i--)
	{
		if(str[i] == ')') count++;
		else if(str[i] == '(')
		{
			if(count > 0) count--;
			else 
			{
				tstr[i] = '$';
			}
		}
	}
	cout << str;
	cout << endl;
	for(int i = 0; i < len; i++)
	{
		if(tstr[i])
			cout << tstr[i];
		else cout << ' ';
	}
	cout << endl;
	return 0;
}
