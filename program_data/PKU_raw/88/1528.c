int main()
{
	char a[31];
	int i, j, count;
	cin.getline(a, 31);
	count = 0;
	for(i = 0; ; i++)
	{
		if(a[i] == '\0')
		{
			for(j = i - count; j < i; j++)
				cout << a[j];
			cout << endl;
			break;
		}
		if(a[i] <= '9' && a[i] >= '0')
			count++;
		if((a[i] > '9' || a[i] < '0') && (a[i - 1] <= '9' && a[i - 1] >= '0'))
		{
			for(j = i - count; j < i; j++)
			{
				cout << a[j];
			}
			cout << endl;
			count = 0;
		}
	}
		return 0;
}