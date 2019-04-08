
int mycompare(const void* elem1, const void* elem2)
{
	return *(int*)elem2 - *(int*)elem1;
}

int main()
{
	int a[1001];
	int b[1001];
	int n, i, total;
	while(cin >> n)
	{
		total = 0;
		if(n == 0) break;
		for(i = 0; i < n; i ++) scanf("%d", &b[i]);
		for(i = 0; i < n; i ++) scanf("%d", &a[i]);
		qsort(a, n, sizeof(int), mycompare);
		qsort(b, n, sizeof(int), mycompare);
		int p1 = 0, p2 = n - 1, p3 = 0, p4 = n - 1;
		while(p1 <= p2)
		{
			if(a[p1] < b[p3])
			{
				p1 ++;
				p3 ++;
				total += 200;
			}
			else if(a[p2] < b[p4])
			{
				p2 --;
				p4 --;
				total += 200;
			}
			else
			{
				if(a[p1] > b[p4]) total -= 200;
				p1 ++;
				p4 --;
			}
		}
		cout << total << endl;
	}
	return 0;
}