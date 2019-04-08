int main()
{
	void isHuiwen(char s0[500], int i);
	char str[500];
	char s0[500];
	int i, j, k, l;
	gets(str);
	l = strlen(str);
	for (i = 2;i < l;i++)
	{
		for(j = 0;j <= l - i;j++)
		{
			for(k = 0;k <= i;k++)
				s0[k] = str[k + j];
			isHuiwen(s0, i);
		}
	}
	return 0;
}
void isHuiwen(char s0[500], int i)
{
	int p;
	for(p = 0;p <= i/2;p++)
	{
		if(s0[p] != s0[i - 1 -p])
		return;
	}
	for(p = 0;p < i;p++)
		printf("%c",s0[p]);
	printf("\n");
	return;
}