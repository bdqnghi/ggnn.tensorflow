int main()
{
	char a[100], b[100];
	int i=0, j=0, g=1,l1, l2;
	cin >> a;
	cin >> b;
	l1=strlen(a);
	l2=strlen(b);
	for (i=0;i<l2;i++)
	{
		if (b[i]==a[0])
		{
			for (j=1;j<l1;j++)
			{
				if (b[j+i]!=a[j])
				{
					g=0;
					break;
				}
			}
			if (g==1)
			{
				cout << i ;
				break;
			}
		}
	}

	return 0;
}