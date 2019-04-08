int n;
int tian[1001] = { 0 };
int qi[1001] = { 0 };
int cal(int n)
{
	int result = -200 * n;
	int money =0 ;
	for(int i=0;i<n;i++)
	{
		int k=0;
		while(i+k<n)
		{
			if(tian[k] > qi[i+k])
			{
				k++;
				money += 200;
			}
			else if(tian[k] == qi[i+k])
			{
				k++;
			}
			else
			{
				k = 0;
				money = 0;
				break;
			}
		}
		if(i+k==n)
		{
			if(money - i * 200 > result)
			{
				result = money  - i * 200;
			}
			money = 0;
		}
	}
	return result;
}
int cmp(const void * af, const void *bf)
{
	int *elem1 = (int*)af;
	int *elem2 = (int*)bf;
	return (*elem2 - *elem1);
}
int main()
{
	int n;
	while(cin >> n && n!=0)
	{
		for(int i=0;i<n;i++)
		{
			cin >> tian[i];
		}
		for(int i=0;i<n;i++)
		{
			cin >> qi[i];
		}
		qsort(tian,n,sizeof(int),cmp);
		qsort(qi,n,sizeof(int),cmp);
		int pos = 0;
		cout << cal(n) << endl;

	}
	return 0;
}