int main()
{
	char str[100], ch[100];
	int i, l, j, k, jin1, jin2, r, sh;
	int sum;
	cin >> jin1;
	cin >> str;
	cin >> jin2;
	sum = 0;
	l = 0;
	for(i = 0; i < 100; i++)
	{
		if(str[i] == '\0') break;
	    else l++;
	}
	for(i = 0; i < l; i++)
	{
		if(str[i] >= 'a' && str[i] <= 'z') 
		{
			sum = sum * jin1 + (str[i] - 'a' + 10);
		}
		if(str[i] >= 'A' && str[i] <= 'Z')
		{
			sum = sum * jin1 + (str[i] - 'A' + 10);
		}
		if(str[i] >= '0' && str[i] <= '9')
		{
			sum = sum * jin1 + (str[i] - '0');
		}
	}
	sh = sum;
	k = 0;
	if(sum == 0)
	{
		cout << '0' << endl;
	}
	for(i = 0; sh != 0; i++)
	{
		r = sh % jin2;
		sh = sh / jin2;
		if(r < 10)
		{
			ch[i] = r + '0';
		}
		else
		{
			ch[i] = r + 'A' - 10;
		}
		k++;
	}
	for(j = k - 1; j >= 0; j--)
	{
		cout << ch[j];
	}
	cout << endl;
         return 0;
}