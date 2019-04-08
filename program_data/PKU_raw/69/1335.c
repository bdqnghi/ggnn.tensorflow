
int main()
{
	char a[251], b[251];
	int na[251], nb[251], s[251] = {0}, i, flag = 0;
	cin.getline(a, 251);
	cin.getline(b, 251);
	int la = strlen(a);
	int lb = strlen(b);
	int lm = (la>lb)?la:lb;
	for(i = 0; i < la; i ++)
	{
		na[i] = a[la - i - 1] - '0';
		s[i] += na[i];
	}
	for(i = 0; i < lb; i ++)
	{
		nb[i] = b[lb - i - 1] - '0';
		s[i] += nb[i];
	}
	for(i = 0;;i++)
	{
		if(i > lm)
			break;
		if(s[i]>9)
		{
			s[i] -= 10;
			s[i+1] += 1;
		}
	}
	for(i = lm; i >= 0; i --)
	{
		if(flag == 0)
		{
			if(s[i] == 0)
				continue;
			else
				flag = 1;
		}
		cout << s[i];
	}
	if(flag == 0)
		cout << "0";
	cout << endl;
	return 0;
}