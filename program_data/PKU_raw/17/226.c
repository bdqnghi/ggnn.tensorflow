int main()
{
	char a[100];
	int l, i, j, num1, num2;
	while (gets(a))
	{
		num1 = 0;
		num2 = 0;
	    l = strlen(a);
	    for (i = 0; i < l; i++)
		    cout << a[i];
	    cout << endl;
	    for (i = 0; i < l; i++)
		   if (a[i] != '(' && a[i] != ')')
		       a[i] = ' ';
		for (i = 0; i < l; i++)
		{
			if (a[i] == '(')
				num1++;
			if (a[i] == ')')
			{
				num2++;
				if (num2 <= num1)
				{
					a[i] = ' ';
					for (j = i; j >= 0; j--)
						if (a[j] == '(')
						{
							a[j] = ' ';
							break;
						}
				}
				if (num2 > num1)
				{
				    a[i] = '?';
				    num2--;
				}
			}
		}
		for (i = 0; i < l; i++)
			if (a[i] == '(')
				a[i] = '$';
		 for (i = 0; i < l; i++)
		    cout << a[i];
	    cout << endl;
	}
	return 0;
}