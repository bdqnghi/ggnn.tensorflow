/*
* ????1000012865_33
* ??????
* ???2010-11-3
* ??:????????
*/
int main()
{
	int N,n[501] = {0},m,a = 0,i;
	cin >> N;
	for(i = 1; i <= N; i++)
		cin >> n[i];
	for(i = 1; i <= N; i++)
		for(int j = 1; j <= N - i; j++)
			if(n[j] > n[j + 1])
				{
				m = n[j + 1];
				n[j + 1] = n[j];
				n[j] = m;
				}
	for(i = 1,m = 0; i <= N -1; i++)
		if(n[i] % 2 != 0)
			m++;
	for(i = 1;a < m - 1; i++)
		if(n[i] % 2 != 0)
			{
			cout << n[i] << ',';
			a++;
			}
	for(i; i <= N; i++)
		if(n[i] % 2 != 0)
			cout << n[i] << endl;
	return 0;
}