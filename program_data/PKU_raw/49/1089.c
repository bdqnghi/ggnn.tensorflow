int main()
{
	char str[500];
	int i, j, k,len,l;
	cin.getline(str,500);

	len=strlen(str);

	for (i=2;i<=len;i++)
	{
		for (k=0;k<=len-i;k++)
		{
			for (j=k,l=i+k-1; j<i+k; j++,l--)
			{
				if (str[j] != str[l])
					break;
			}
			if (j==i+k)
			{
				for (j=k;j<i+k;j++)
					cout << str[j];
				cout << endl;
			}
		}
	}

	return 0;
}
