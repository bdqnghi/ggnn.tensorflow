char a[100000], b[100000];
int power(int, int);
int main()
{
	int a1[1000], b1[1000], i, j, k, count, num = 0, n, m, time[1000], max = 0;
	memset(time, 0, sizeof(time));
	cin.getline(a, 100000);
	cin.getline(b, 100000);
	k = 0;
	count = 0;
	for(i = 0; ; i++)
	{
		if(a[i] == ',')
		{
			m = 0;
			n = count - 1;
			for(j = i - count; j < i; j++)
				m = m + (a[j] - '0') * power(10, n--);
			a1[k++] = m;
			num++;
			count = 0;
		}
		else if(a[i] == '\0')
		{
			m = 0;
			n = count - 1;
			for(j = i - count; j < i; j++)
				m = m + (a[j] - '0') * power(10, n--);
			a1[k++] = m;
			num++;
			break;
		}
		else count++;
	}
	k = 0;
	count = 0;
	for(i = 0; ; i++)
	{
		if(b[i] == ',')
		{
			m = 0;
			n = count - 1;
			for(j = i - count; j < i; j++)
				m = m + (b[j] - '0') * power(10, n--);
			b1[k++] = m;
			count = 0;
		}
		else if(b[i] == '\0')
		{
			m = 0;
			n = count - 1;
			for(j = i - count; j < i; j++)
				m = m + (b[j] - '0') * power(10, n--);
			b1[k++] = m;
			break;
		}
		else count++;
	}
	for(i = 0; i <= num; i++)
		for(j = a1[i]; j < b1[i]; j++)
			time[j]++;
	for(i = 0; i < 1000; i++)
	{
		if(time[i] > max)
			max = time[i];
	}
	cout << num << " " << max << endl;
	return 0;
}
int power(int i, int j)
{
	int k, m = 1;
	for(k = 0; k < j; k++)
		m = m * i;
	return m;
}
