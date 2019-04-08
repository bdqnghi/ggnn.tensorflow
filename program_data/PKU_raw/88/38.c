int main()
{
	char a[32];
	int i, flag = 0;
	cin.getline(a, 32);
	for(i = 0;a[i] != '\0';i++)
	{
		if(a[i] - '0' < 10 && a[i] - '0' > -1)
		{
			cout << a[i];
			flag = 1;
		}
		else if(flag == 1)
		{
			cout << endl;
			flag = 0;
		}
	}
	cout << endl;
	return 0;
}
