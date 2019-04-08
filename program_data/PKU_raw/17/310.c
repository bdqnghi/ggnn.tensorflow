
int main()
{
	char ans[100], c;
	int stack[100], top = 0, l = 0;
	while(scanf("%c", &c) == 1)
	{
		cout << c;
		if (c == '\n')
		{
			ans[l] = '\0';
			cout << ans << endl;
			top = 0;
			l = 0;
			continue;
		}
		if (c == '(')
		{
			stack[top++] = l;
			ans[l] = '$';
			l++;
			continue;
		}
		if (c == ')')
		{
			if (top == 0)
			{
				ans[l++] = '?';
				continue;
			}
			else
			{
				ans[l++] = ' ';
				ans[stack[--top]] = ' ';
				continue;
			}
		}
		ans[l++] = ' ';
	}
	cout << endl;
	ans[l] = '\0';
	cout << ans << endl;
	
	return 0;
}
