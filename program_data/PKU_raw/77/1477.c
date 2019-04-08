
int sum ;
void change(int t, char s[],char a, char b)
{
	if (sum == 0)
		return;
	int i, j;
	for (i = 0;i < t;i++)
	{
		if (s[i] == a)
		{
			for (j = i + 1;s[j] == '0' && j < t;j++);
			if (s[j] == b)
			{
				cout << i << " " << j << endl;
				sum = sum - 2;
			    s[i] = s[j] = '0';
				change(t, s,a, b);
				
			  
			}
		}
	}
}


int main()
{
	char s[105], a, b;
	cin.getline(s, 105);
	int l = strlen(s);
	sum = l;
	a = s[0];
	for (int i = 1;i < l;i++)
	{
		if (s[i] != s[0])
			b = s[i];
	}
	change(l, s, a, b);
	
	return 0;
}