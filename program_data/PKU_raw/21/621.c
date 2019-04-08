int main ()
{
	int n = 0, a[1000] = {0}, i = 0, j = 0;
	double b[1000] = {0};                     //n?????????a?????b????????
	cin >> n;
	double sum = 0, max = 0;                  //sum???????????max?????????
	for(i = 0; i < n; i++)
	{
		cin >> a[i];
		sum = sum + a[i];
	}
	sum = sum / n;                            //???????
	for(i = 0; i < n - 1; i ++)
		for(j = 0; j < n - i - 1; j ++)
			if(a[j] > a[j + 1])
			{
				int temp = 0;
				temp = a[i];
				a[i] = a[i + 1];
				a[i + 1] = temp;
			}                                 //??
	for(i = 0; i < n; i ++)
		b[i] = fabs(a[i] - sum);              //?????????
	for(i = 0; i < n; i ++)
		if(b[i] > max)
			max = b[i];
	for(i = 0; i < n; i ++)                   //????????
		if(b[i] == max)
		{
			cout << a[i];
			break;
		}
	for(i = i + 1; i < n ; i ++)
		if(b[i] == max)
			cout << ',' << a[i];

	return 0;
}