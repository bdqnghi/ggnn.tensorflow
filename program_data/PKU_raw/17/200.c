int main()
{
char a[101];
int len;
while(cin >> a)
{
	cout << a << endl << endl;
	len = strlen(a);
	for(int i = 0; i < len ; i++)
	{	if(isalpha(a[i]))
			a[i] = ' ';
		else if(a[i] == '(')
			a[i] = '$';	
		else if(a[i] == ')')
			a[i] = '?';
	}
	for(int temp = 0; temp < len/2 ; temp++)
	{
		for(int i = 0; i < len ; i++)
			if(a[i] == '$')
			{
				for(int j = i+1; j < len ; j++)
				{
					if(a[j] == '$')
					{
						break;
					}
					else if(a[j] == '?')
					{
						a[i] = ' ';
						a[j] = ' ';
						break;
					}
				}
			}
	}
	cout << a << endl << endl;
}	
cin.get();cin.get();
return 0;
}

