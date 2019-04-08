int main()
{
	char s[101];
	int l,i,j;
	cin.getline (s,101);
	l = strlen (s);
	for (i = 1;i <= l-1;i++)
	{
		if ((s[i] == ' ') && (s[i-1]== ' '))
		{
			for (j = i;j <= l-2;j++) 
				s[j]=s[j+1];
			l--;
			i--;
		}
	}
	for (i = 0;i <= l-1; i++)
		cout << s[i];
    return 0;
}