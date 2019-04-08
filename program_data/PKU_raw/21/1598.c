/*************************
 ***??:??? 1200012776
 ***????:?????
 ***??:2013?1?2?
 *************************/
int num[301] = {0}; 
int cmp(int a, int b)
{
	if (num[a] < num[b])
		return 1;
	return 0;
}
int main()
{
	int sum = 0, n, i, j, max[50] = {0}, max_sum = 0;
	double ava = 0, distance = 0, t;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> num[i];
		sum += num[i];
	}
	ava = sum * 1.0 / n;	//???
	for (i = 0; i < n; i++)
	{
		t = fabs(ava - num[i]);	//t?????????
		if (t - distance > 1e-4)	//?????????
		{
			max_sum = 0;
			max[max_sum++] = i;
			distance = t;	//????
			continue;
		}
		if (t - distance < -1e-4)
			continue;	//t?distance?,??
		if (fabs(t - distance) < 1e-4)
		{
			max[max_sum++] = i;
		}	//???????,???max_sum++
	}
	sort(max, max + max_sum - 1, cmp);
	cout << num[max[0]];
	for (i = 1; i < max_sum; i++)
	{
		cout << "," << num[max[i]];
	}
	return 0;
}

