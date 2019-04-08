

int main()
{
	char str[510], div[510][5], *p;
	int times[510] = {0}, n, len, *q;
	int i, j, k, max, cnt;
	cin >> n;
	cin.get();
	cin.getline(str, 510);
	len = strlen(str);
	p = str;
	q = times;
	for(i = 0; i < len-n+1; i++)
		for(cnt = 0, k = i; cnt <= n; k++, cnt++)
		{
			if(cnt == n)
				div[i][k-i] = '\0';
			else
				div[i][k-i] = *(p+k);
		}
	for(i = 0; i < len-n+1; i++)
	{
		if(*(q+i) < 0)
			continue;
		*(q+i) += 1;
		for(j = i+1; j < len-n+1; j++)
		{
			if(strcmp(div[i], div[j]) == 0)
			{
				*(q+i) += 1;
				*(q+j) = -1;
			}
		}
	}
	max = 0;
	for(i = 0; i < len-n+1; i++)
		max = (max > *(q+i) ? max : *(q+i));
	if(max <= 1)
		cout << "NO"<< endl;
	else
	{
		cout << max << endl;
		for(i = 0; i < len-n+1; i++)
			if(*(q+i) == max)
				cout << div[i] << endl;
	}
	return 0;
}
