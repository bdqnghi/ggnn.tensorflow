//*******************************************************
//*11.15??  ????                                  *
//*?????  ?? 1100012844                          *
//*???2011?11?23?                                 *
//*******************************************************
char a[100], boy, girl;
int girlNO[50], flag[100] = {0};
void qianshou(int k)
{
	int i;
	if (k != 0)
		qianshou(k - 1);
	i = girlNO[k] - 1;
	while (a[i] == girl || flag[i])
		i--;
	cout << i << " " << girlNO[k] << endl;
	flag[i] = 1;
}
int main()
{
	int j = 1, n = 0;
	a[0] = cin.get();
	boy = a[0];
	while ((a[j] = cin.get()) != '\n')
	{
		if (a[j] != boy)
		{
			girlNO[n] = j;
			n++;
		}
		j++;
	}
	girl = a[j - 1];
	qianshou(n - 1);
	return 0;
}