int main()
{
	int x[2000], y[2000], i = 1, j, sum = 0, pep[2000], k = 0;
	char ch = ',';
	while(ch == ',')
	{
		cin >> x[i];
		sum++;
		i++;
		ch = cin.get();
	}
	for(i = 1; i <= sum - 1; i++)
		cin >> y[i] >> ch;
	cin >> y[sum];
	for(i = 1; i <= 2000; i++)//pep?????
		pep[i] = 0;
	for(i = 1; i <= sum; i++)//?sum??????
		for(j = x[i]; j < y[i]; j++)//?pep??????i?????????1
			pep[j]++;
	for(i = 1; i <= 2000; i++)//?pep?????
	{
		for(j = 1; j <= 2000; j++)
		{
			if(pep[i] < pep[j])
				break;
			k++;
		}
		if(k == 2000)//???????????sum????
			{
				cout << sum << " " << pep[i] << endl;
				return 0;//????
			}
		k = 0;
	}
}