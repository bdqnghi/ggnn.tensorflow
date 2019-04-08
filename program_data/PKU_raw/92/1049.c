



int Tian[MAXIN], Qi[MAXIN];

int MyCompare(const void* e1, const void* e2)
{
	return *(int*) e1 - *(int*)e2;
}

int main()
{
	int n;
	while(scanf("%d", &n) && n)
	{
		int i;
		for(i = 0;i < n; i ++)
			scanf("%d", &Tian[i]);
		for(i = 0;i < n;i ++)
			scanf("%d", &Qi[i]);
		qsort(Tian, n, sizeof(int), MyCompare);
		qsort(Qi, n, sizeof(int), MyCompare);

		int Tp = 0;
		int Qtail = n - 1;
		int Ttail = n - 1;
		int Qp = 0;
		int ans = 0;
		while(Qp <= Qtail)
		{
			if(Tian[Tp] > Qi[Qp])
			{
				Tp ++;
				Qp ++;
				ans += 200;
			}
			else if(Tian[Tp] < Qi[Qp])
			{
				Qtail --;
				Tp ++;
				ans -= 200;
			}
			else // Tian[Tp] == Qi[Qp]
			{
				if(Tian[Ttail] > Qi[Qtail])
				{
					Qtail --;
					Ttail --;
					ans += 200;
				}
				else
				{
					if(Tian[Tp] < Qi[Qtail])
						ans -= 200;
					Qtail --;
					Tp ++;
				}
			}
		}

		printf("%d\n", ans); 
	}
	return 0;
}