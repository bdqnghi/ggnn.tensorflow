int main()
{
	int n, i, l, g, j;
	char a[100];
	cin >> n;
	cin.get();
	for (i=0;i<n;i++)
	{
		memset(a, 0, sizeof(a));
		cin.getline(a, 100);
		l=strlen(a);
		g=1;
		if ((a[0]>='A' && a[0]<='z') ||(a[0] == '_'))
		{
			for (j=1;j<l;j++)
			{
				if (a[j]<'0' || a[j]> 'z' ||(a[j]>'9' && a[j] <'A') )
				{
					g=0;
					break;
				}
			}
			if (g==0)
				cout << "0" << endl;
			else
				cout << "1" << endl;
		}
		else
				cout << "0" << endl;
	}			
	return 0;
}
