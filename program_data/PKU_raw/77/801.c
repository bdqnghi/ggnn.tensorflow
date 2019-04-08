int main ()
{
	char str[100],a,b;
	cin >> str;
	int len,i,j;
	len = strlen(str);
	a = str[0];
	b = str[len - 1];
	for (i = 0;i < len;i++)
		for (j = i - 1;j >= 0;j--)
		{
			if (str[i] == b && str[j] == a)
			{
				cout << j << ' ' << i << endl;
				str[j] = b;
				break;
			}
		}
	return 0;
}