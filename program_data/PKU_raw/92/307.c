int mycompare(const void *a, const void *b)
{
	return (*(int *)a)-(*(int *)b);
}
int main()
{
	int t[2000];
	int q[2000];
	int ncase;
	int i;
	int h;
	int pbegin;
	int tmax;
	int count;
	while(cin >> ncase)
	{
		if(ncase == 0)
			break;
		for(i = 0; i < ncase; i ++)
		{
			cin >> t[i];
		}
		qsort(t, ncase, sizeof(int), mycompare);
		for(i = 0; i < ncase; i ++)
		{
			cin >> q[i];
		}
		qsort(q, ncase, sizeof(int), mycompare);
		tmax = -99999999;
		pbegin = 0;
		count = 0;
		for(pbegin = 0; pbegin < ncase; pbegin ++)
		{
			count = 0;
			for(i = 0; i < ncase; i ++)
			{
				if(t[(pbegin+i)%ncase] > q[i])
					count += 200;
				if(t[(pbegin+i)%ncase] < q[i])
					count -= 200;
			}
			if(tmax < count)
				tmax = count;
		
		}
		cout << tmax << endl;
	}

	return 0;
}