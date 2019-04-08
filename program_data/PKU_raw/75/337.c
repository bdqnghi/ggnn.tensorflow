//?????
//??????
//???2010.11.27

int main()
{
	int i = 0;
	double j = 0.0;
	char a[10000];         //???a,b?????????","
	char b[10000];
	int begin[10000];      //?????????????begin,end?
	int end[10000];
	int p = 0;
	int q = 0;
	int last_time = 0;   //??last_time?????????
	int max = 0;         //??max????????????
	int count = 0;
	int flag = 0;

	memset(a,0,sizeof(a));    //????
	memset(b,0,sizeof(b));
	memset(begin,0,sizeof(begin));
	memset(end,0,sizeof(end));

	cin.getline(a,10000);
	cin.getline(b,10000);



	for (i = 0; i <= 10000; i ++)     //????????
	{
		if ((a[i] != ',') && (a[i] != '\0'))
			flag ++;
		if ((a[i] == ',') || (a[i] == '\0'))
		{
			if (flag == 3)             //???????????begin[i]???
				begin[p ++] = a[i - 1] - '0' + 10 * (a[i - 2] - '0')
				+ 100 * (a[i - 3] - '0');
			if (flag == 2)
				begin[p ++] = a[i - 1] - '0' + 10 * (a[i - 2] - '0');
			if (flag == 1)
				begin[p ++] = a[i - 1] - '0';
			flag = 0;
		}
		if (a[i] == '\0')
			break;
	}
	for (i = 0; i <= 10000; i ++)
	{
		if ((b[i] != ',') && (b[i] != '\0'))
			flag ++;
		if ((b[i] == ',') || (b[i] == '\0'))
		{
			if (flag == 3)
				end[q ++] = b[i - 1] - '0' + 10 * (b[i - 2] - '0')
				+ 100 * (b[i - 3] - '0');
			if (flag == 2)
				end[q ++] = b[i - 1] - '0' + 10 * (b[i - 2] - '0');
			if (flag == 1)
				end[q ++] = b[i - 1] - '0';
			flag = 0;
		}
		if (b[i] == '\0')
			break;
	}

	for (i = 0; i <= p - 1; i ++)     //?????????
		if (end[i] > last_time)
			last_time = end[i];
	for (j = 0.5; j <= last_time - 0.5; j ++)    //????????????
	{
		count = 0;
		for (i = 0; i <= p - 1; i ++)
			if ((begin[i] < j) && (end[i] > j))
				count ++;
		if (count > max)
			max = count;
	}

	cout << p << " " << max;
	cin >> i;

	return 0;
}