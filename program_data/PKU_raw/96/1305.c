int main()
{
	char aa[110];
    int a[110],b[110],c,num = 0,flag = 0;
	cin >>aa;
	for(int i = 1; i <= strlen(aa);i++)
		a[i-1] = aa[i-1]-'0';
	if(strlen(aa)==2)
	{
		if(10*a[0]+a[1]<13)
		{
			num = 1;
			b[1] = 0;
			a[1] = 10 * a[0] + a[1];
		}
	}
	if(strlen(aa) == 1)
	{
		num = 0;
		b[0] = 0;
	}
	if(strlen(aa)> 2 || (num==0&&10*a[0]+a[1] >= 13))
	{for(int j = 1; j < strlen(aa);j++)
	{
		c = 10*a[j-1]+a[j];
		if(flag == 1)
		{
			c = c+a[j-2]*100;
			flag = 0;
		}
		if(c < 13)
		{
			b[j] = 0;
			flag = 1;
		}
		if(c >= 13)
		{
			if(num == 0) num = j;
			b[j] = c/13;
			a[j] = c%13;
		}
	}
	}
	for(int k = num;k<strlen(aa);k++)
		cout << b[k];
	cout << endl;
	cout << a[strlen(aa)-1];
	return 0;
}