
int compare(const void * elem1, const void * elem2)
{
	return (*(int *)elem1 - *(int *)elem2);
}

int main()
{
	int n;
	int TJ[2001];
	int QW[2001];
	
	while(cin >> n && n != 0)
	{
		for (int i = 0; i < n; i ++)
			cin >> TJ[i];
		for (int i = 0; i < n; i ++)
			cin >> QW[i];
		
		qsort(TJ, n, sizeof(int), compare);
		qsort(QW, n, sizeof(int), compare);

		int Tslow, Tfast, Qslow, Qfast;
		Tslow = Qslow = 0;
		Tfast = Qfast = n - 1;

		int bonus = 0;

		while(Tslow <= Tfast && Qslow <= Qfast)
		{
			if (TJ[Tfast] > QW[Qfast])
			{
				Tfast --;
				Qfast --;
				bonus ++;
			}
			else if (TJ[Tfast] < QW[Qfast])
			{
				Tslow ++;
				Qfast --;
				if (TJ[Tslow - 1] < QW[Qfast + 1])
					bonus --;
			}
			else
			{
				while(Tslow <= Tfast && Qslow <= Qfast)
				{
					if (TJ[Tslow] > QW[Qslow])
					{
						Tslow ++;
						Qslow ++;
						bonus ++;
					}
					else
					{
						Tslow ++;
						Qfast --;
						if (TJ[Tslow - 1] < QW[Qfast + 1])
							bonus --;
						break;
					}
				}
			}
		}
		cout << bonus * 200 << endl;
	}
	return 0;
}