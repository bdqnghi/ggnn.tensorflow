int main()
{
	int begin[max], end[max];
	int i = 0;
	for (i = 0;; i++)
	{
		cin >> begin[i];
		char c = getchar();
		if (c == '\n')break;
	}	i++;

	for (int j = 0; j < i; j++)
	{
		cin >> end[j];
		char c = getchar();
		if (c == '\n')break;

	}

	cout << i;
	int num[1001] = { 0 };
	for (int j = 0; j < i;j++)
	for (int k = begin[j]; k < end[j]; k++)
		num[k]++;
	int imax = 0;
	for (int j = 0; j < max;j++)
	if (num[j]>imax)imax = num[j];
	cout <<" "<< imax;

	







}