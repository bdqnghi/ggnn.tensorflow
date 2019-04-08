int cmp(const void*a, const void*b)
{
	return *(int*)b - *(int*)a;
}

int main()
{
	int n;
	int i;
	while (cin >> n, n > 0){
	int t[1000], q[1000];
	for (i = 0;i < n;i++)
		cin >> t[i];
	for (i = 0;i < n;i++)
		cin >> q[i];
	qsort(t,n,sizeof(int),cmp);
	qsort(q,n,sizeof(int),cmp);
	int t1 = 0, t2 = n-1;
	int q1 = 0, q2 = n-1;
	int cnt = 0;
	for (i = 0;i < n;i++)
	{
		if (t[t1] > q[q1])
		{
			t1++;
			q1++;
			cnt += 200;
		}
		else
		{
			if (t[t2] > q[q2])
			{
				t2--;
				q2--;
				cnt += 200;
			}
			else
			{
				if (t[t2] < q[q1])
					cnt -= 200;
				t2--;
				q1++;
			}
		}
	}
	cout << cnt << endl;
	}
	return 0;
}

