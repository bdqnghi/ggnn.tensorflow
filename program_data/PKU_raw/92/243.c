int mycompare(const void *elem1, const void *elem2)
{
	return *((int *)elem2) - *((int *)elem1);
}
int main()
{
	int n;
	while (cin >> n, n != 0)
	{
		int a[1000] = {0};
		int b[1000] = {0};
		for (int i = 0; i < n; i++)
			cin >> a[i];
		for (int i = 0; i < n; i++)
			cin >> b[i];
		qsort(a, n, sizeof(int), mycompare);
		qsort(b, n, sizeof(int), mycompare);
		int index1_head = 0, index1_tail = n-1;
		int index2_head = 0, index2_tail = n-1;
		int money = 0;
		while (index1_head <= index1_tail)
		{
			if (a[index1_head] > b[index2_head])
			{
				index1_head++;
				index2_head++;
				money += 200;
			}
			else if (a[index1_tail] > b[index2_tail])
			{
				index1_tail--;
				index2_tail--;
				money += 200;
			}
			else 
			{
				if (b[index2_head] > a[index1_tail]) money -= 200;
				index1_tail--;
				index2_head++;
			}
		}
		cout << money << endl;
	}
return 0;
}