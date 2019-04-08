/*
@ ??????.cpp
@ 1000012895
@ ???
@ 2010/10/31
*/
int main()
{
	int N, a[501], b[501], i, j, k, temp1, temp2 = 0;
	cin >> N;
	for(i = 1; i <= N; i++)
		cin >> a[i];
	j = 1;
	for(i = 1; i <= N; i++)
	{
		if(a[i] % 2 != 0)
		{
			b[j] = a[i];
			j++;
		}
	}
	j--;
	for(i = 1; i < j; i++)
		for(k = 1; k < j - i + 1; k++)
			if(b[k] > b[k+1])
			{
				temp1 = b[k];
				b[k] = b[k+1];
				b[k+1] = temp1;
			}
	for(i = 1; i <= j; i++)
	{
		if(temp2 == 0)
			cout << b[i];
		else
			cout << ',' << b[i];
		temp2++;
	}
	return 0;
}