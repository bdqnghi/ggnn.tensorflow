int main()
{
	int n, i,j;
	char a[90];
	cin >> n;
	cin.get();
	for(i = 0;i < n;i++)
	{
		j = 0;
		cin.getline(a,90);
		if(a[0] == '_' || (a[0] - 'A' >= 0 && a[0] - 'Z' <= 0)||(a[0] - 'a' >= 0&&a[0] - 'z' <= 0 ))
		{
			if(strlen(a) == 1)
				cout << 1 << endl;
			else
			{
				for(j = 1;j < strlen(a);j++)
				if(a[j] == '_' || (a[j] - 'A' >= 0 && a[j] - 'Z' <= 0)||(a[j] - 'a' >= 0&&a[j] - 'z' <= 0 )||(a[j] - '0'>=0&&a[j]-'9'<= 0))
					continue;
				else
					break;
			}
		}
				if(j == strlen(a) && strlen(a) != 1)
					cout << 1 <<endl;
				if(j != strlen(a) && strlen(a) != 1)
					cout << 0 <<endl;
	}
	return 0;
	}