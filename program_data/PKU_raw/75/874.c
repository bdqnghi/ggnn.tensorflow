/*
     ????????
     ??????
     ???2010-12-29
*/
int main()
{
	char c[1000];
	int num = 0, i, j, max = 1, flag[1000] = {0};           //flag[]?????????
	int x[1000], y[1000];               //?????????
	for(i = 0; c[i - 1] != '\n'; i++)
	{
		cin >> x[i];
		c[i] = cin.get();          //???????????
	}
	num = i;
    for(i = 0; c[i - 1] != '\n'; i++)
	{
		cin >> y[i];
        c[i] = cin.get();
	}
	for(i = 0; i < num; i++)
	{
		for(j = x[i]; j < y[i]; j++)
		{
			flag[j]++;
		}
	}
	for(i = 0; i < 1000; i++)
	{
		if(flag[i] > max) max = flag[i];
	}
	cout << num << " " << max << endl;
	return 0;
}