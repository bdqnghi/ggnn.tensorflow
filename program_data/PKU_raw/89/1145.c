// ??????.cpp : ??????????????
//



int main()
{
	struct celebrity
	{
		int num;
		int no;
	}knowed[10000];
	int x = 0,y = 0,temp,n,j = 0,k = 0,ins;
	cin >> n;
	for (;;)
	{
		cin >> temp;
		cin >> ins;
		if (temp + ins == 0)
		{
			break;
		}
		if (knowed[ins].num < 0)
		{
			knowed[ins].num = 0;
		}
		if (knowed[ins].num >= 0)
		{
			knowed[ins].num++;
		}
	}
	for (j = 0;j <= n - 1;j++)
	{
		if (knowed[j].num == n - 1)
		{
			cout << j << endl;
			y = 1;
			break;
		}
	}
	if (y == 0)
	{
		cout << "NOT FOUND" << endl;
	}
	return 0;
}
