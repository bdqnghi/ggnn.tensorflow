int main()
{
	int i, j, k;
	int nhuiwen, len;
	char str[500];
	
	cin >> str;
    len = strlen(str);
	for (nhuiwen = 2; nhuiwen <= len; nhuiwen ++)
	{
		char buf1[500] = {'\0'}, buf2[500] = {'\0'};
		for (i = 0; i + nhuiwen - 1 < len; i ++)
		{
			int n = nhuiwen, m = 0;
			for (j = i; j <= i + nhuiwen - 1; j ++)
			{
				buf1[-- n] = str[j];
				buf2[m ++] = str[j];
			}
			//cout << "n = " << n << endl << "m = " << m << endl;
			buf1[nhuiwen] = '\0'; buf2[nhuiwen] = '\0';
			if (strcmp(buf1, buf2) == 0)
			{
				for (k = 0; k < nhuiwen; k ++)
					cout << buf1[k];
				cout << endl;
			}
		}
	}
	return 0;
}