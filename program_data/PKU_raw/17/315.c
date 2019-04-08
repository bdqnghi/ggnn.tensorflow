
int main() {
	char str[110] = {0};
	
	while(cin >> str)
	{
		int change[110] = {0};
	    char ans[110] = {0};
		int len = strlen(str);
		for(int i = 0; i < len; i++)
		{
			if(str[i] == '(')
			{
				change[i] = 1;
			}
			else if(str[i] == ')')
				change[i] = -1;
			else change[i] = 0;
		}
		int sum = 0;
		for(int i =0; i < len; i++)
		{
	          sum += change[i];
			  if(sum < 0)
			  {
				  ans[i] = '?';
				  sum = 0;
			  }

		}
		sum = 0;
		for(int i = len - 1; i >= 0; i--)
		{
	          sum += change[i];
			  if(sum > 0)
			  {
				  ans[i] = '$';
				  sum = 0;
			  }

		}
		for(int i =0; i < len; i++)
		{
			if(ans[i] != '?' && ans[i] != '$')
				ans[i] = ' ';
		}
		cout << str << endl;
		cout << ans << endl;
	}

	return 0;
}