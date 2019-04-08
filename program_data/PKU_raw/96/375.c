int main()
{
	char num[100];
	int a[99],d,i,j,k,flag = 0;
	cin >> num;
	d = num[0] - '0';
	a[0] = 0;
	for(i = 1; num[i] != '\0'; i++)
	{
		a[i - 1] = (d * 10 + (num [i] - '0')) / 13;
		d = (d * 10 + (num [i] - '0')) % 13;
	}
	for(j = 1; num[j] != '\0'; j++)
	{
		if(a[j - 1] == 0)
			continue;
		else
		{
			cout << a[j - 1];
			flag = 1;
			break;
		}
	}
	if(flag == 1)
	{
		for(k = j; k < i - 1; k++)
		{
			cout << a[k];
		}
		cout << endl;
	}
	else
	{
		cout << a[0] << endl;
	}
	cout << d;
	return 0;
}