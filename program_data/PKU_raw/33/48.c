int main()
{
	char a[256];
	int n, j, i;
	cin >> n;
	for(i = 0;i < n;i++)
	{
		cin >> a;
		for(j = 0;j < strlen(a);j++)
			switch(a[j])
		{
			case 'A': cout << 'T';break;
			case 'T': cout << 'A';break;
			case 'G': cout << 'C';break;
			case 'C': cout << 'G';break;
		}
		cout << endl;
	}
	return 0;
}
