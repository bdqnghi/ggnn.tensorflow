
int n;
int a[1001];
int b[1001];


int mycompare(const void *p1,const void *p2)
{
	int *a1,*a2;
	a1 = (int *)p1;
	a2 = (int *)p2;
	return *a2 - *a1;
}

int main()
{
	int i,j,k1,k2;
	int la,lb,ra,rb;
	int total;

	while(true)
	{
		cin >> n;
		if (n == 0) break;

		for (i = 0;i < n;i ++) scanf("%d",&a[i]);
		for (i = 0;i < n;i ++) scanf("%d",&b[i]);

		qsort(a,n,sizeof(int),mycompare);
		qsort(b,n,sizeof(int),mycompare);

		total = 0;
		la = 0; lb = 0;
		ra = n - 1; rb = n - 1;

		while (la <= ra)
		{
			if (a[la] > b[lb])
			{
				total = total + 200;
				la ++;
				lb ++;
			}
			else
			{
				if (a[la] < b[lb])
				{
					total = total - 200;
					lb ++;
					ra --;
				}
				else
				{

					for (k1 = ra,k2 = rb;la <= k1; k1 --,k2 --)
					{
						if (a[k1] > b[k2])
						{
							total = total + 200;
							ra --;
							rb --;
						}
						else
						{
							if (a[k1] < b[lb]) total = total - 200;
							ra = k1;
							rb = k2;
							ra --;
							lb ++;
							break;
						}
					}
				}
			}
		}
		cout << total << endl;
	}
	return 0;
}

			