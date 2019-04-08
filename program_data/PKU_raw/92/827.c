
int tianji[1010];
int qiwang[1010];

int mycomp(const void * elem1, const void * elem2)
{
	return *((int *)elem2)-*((int *)elem1);
}

int main()
{
	int n;
	while (scanf("%d", &n))
	{
		if (n==0)
			break;
		for (int i=0;i<n;i++)
			scanf("%d", &tianji[i]);
		for (int i=0;i<n;i++)
			scanf("%d", &qiwang[i]);
		qsort(tianji, n, sizeof(int), mycomp);
		qsort(qiwang, n, sizeof(int), mycomp);
		int ts = 0;
		int te = n-1;
		int qs = 0;
		int qe = n-1;
		int win = 0;
		while (ts<=te)
		{
			if (tianji[ts]>qiwang[qs])
			{
				win++;
				ts++;
				qs++;
			}
			else if (tianji[ts]<qiwang[qs])
			{
				win--;
				te--;
				qs++;
			}
			else if (tianji[te]>qiwang[qe])
			{
				win++;
				te--;
				qe--;
			}
			else if (tianji[te]<qiwang[qe])
			{
				win--;
				te--;
				qs++;
			}
			else
			{
				if (tianji[te]<qiwang[qs])
					win--;
				te--;
				qs++;
			}
		}
		printf("%d\n", win*200);
	}
	return 0;
}