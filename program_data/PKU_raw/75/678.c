int main()
{
	int count[1000]={0}, x[10000] = {0}, y[10000] = {0};
	int a, b, i=0, q=0, k, m, p, max;
	char ch;
	do
	{
		cin >> a;
		x[i] = a;
		i++;
		ch = cin.get();
	}while(ch==',');
	do
	{
		cin >> b;
		y[q] = b;
		q++;
		ch = cin.get();
	}while(ch==',');
	for(m=0; m<i; m++)
	{
		for(k=x[m]; k<y[m]; k++)
			count[k]++;
	}
	max = 0;
	for(p=0; p<1000; p++)
	{
		if(count[p] > max)
			max = count[p];
	}
	cout << i << ' ' << max << endl;
	return 0;
}