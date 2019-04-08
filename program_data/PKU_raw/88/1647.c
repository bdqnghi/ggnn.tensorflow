int main()
{
	char a[31];
	int i;
	cin.getline(a, 31);
	for (i = 0; i < strlen(a); i++)
	{
		if (isdigit(a[i]))
		{
			if (!isdigit(a[i+1]))
				cout << a[i] << endl;
			else
				cout << a[i];
		}
	}
	return 0;
}