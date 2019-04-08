
int main()
{
	int i, r = 0, q = 0, q1 = 0;
	char num[100];
	
	cin >> num;

	if ((num[1] == '\0') || 
		(num[2] == '\0' && (((num[0]-'0') * 10 + num[1] - '0') < 13)))
		cout << "0" << endl;
	else
	{
		q = ((num[0] - '0') * 10 + num[1] - '0') / 13;
		if (q != 0)
		{	
			cout << q;
			r = ((num[0] - '0') * 10 + num[1] - '0') % 13;
			for (i = 2; num[i] != '\0'; i++)
			{
				q = (r * 10 + num[i] - '0') / 13;
				cout << q;
				r = (r * 10 + num[i] - '0') % 13;
			}
			cout << endl;
		}
		else
		{
			r = ((num[0] - '0') * 100 + (num[1] - '0') * 10 + num[2] - '0') % 13;
			q1 = ((num[0] - '0') * 100 + (num[1] - '0') * 10 + num[2] - '0') / 13;
			cout << q1;
			for (i = 3; num[i] != '\0'; i++)
			{
				q = (r * 10 + num[i] - '0') / 13;
				cout << q;
				r = (r * 10 + num[i] - '0') % 13;
			}
			cout << endl;
		}
	}

	r = 0;
	// ???????r
	for (i = 0; num[i] != '\0'; i++)
	{
		r = (r * 10 + num[i] - '0') % 13;
	}
	cout << r << endl;

	return 0;
}