void same(int i, char x[])
{
	int j, k;
    int flag = 1;
	for(j = 0; x[j] != '\0'; j++)
	{
		flag = 1;
		for(k = 0; k <  + i / 2; k ++)
		{
			if(x[k + j] != x[j + i - 1 - k])
			{
				flag = 0;
				break;
			}
		}
		if(flag)
		{
			for(k = j; k < j + i; k ++)
				cout << x[k];
			cout << endl;
		}
			
	}
}
int main()
{
	char x[501];
	int i, len;
	cin >> x;
	len = strlen(x);

	for(i = 2; i <= len; i++)
	{
		same(i, x);
	}
	return 0;
}