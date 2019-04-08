//2013.11.19
//zwb

int main ()
{
	char a[102];
	int b[102] = {0}, ans[102] = {0};
	int i, j, r, len, flag = 0;
	cin.getline(a,100);
	len = strlen(a);

	for(i = 0; i < len; i++)
	{
		b[i+1] = a[i] - '0';
	}

	if(a[1] == '\0')
	{
		cout << "0" << endl;
		cout << b[1] << endl;
	}
	else if(a[1] != '\0' && a[2] == '\0' && b[1] * 10 + b[2] < 13)
	{
		cout << "0" << endl;
		cout << b[1] * 10 + b[2]<< endl;
	}
	else
	{
		ans[1] = (b[1] * 10 + b[2]) / 13;
		r = (b[1] * 10 + b[2]) % 13;

		for(i = 2; i < len; i++)
		{
			ans[i] = (r * 10 + b[i+1]) / 13;
			r = (r * 10 + b[i+1]) % 13;
		}
		
		for(i = 1; i < len; i++)
		{
			if(ans[1] == 0 && flag == 0)
			{
				flag = 1;
				continue;
			}
			cout << ans[i];
		}
		cout << endl;
		cout << r << endl;
	}
	return 0;
}
