int Mycompare(const void *p1, const void *p2)
{
	return *((int *)p2) - *((int *)p1);
}
int main()
{
	int horseNum, Thorse[1000], Qhorse[1000], i;
	int Th, Tt, Qh, Qt, sum;
	while(cin>>horseNum)
	{
		if(horseNum == 0)
			break;
		for(i=0; i<horseNum; i++)
			cin>>Thorse[i];
		for(i=0; i<horseNum; i++)
			cin>>Qhorse[i];
		qsort(Thorse, horseNum, sizeof(int), Mycompare);
		qsort(Qhorse, horseNum, sizeof(int), Mycompare);
		Th = Qh = 0;
		Tt = Qt = horseNum - 1;
		sum = 0;
		while(Th <= Tt)
		{
			if(Thorse[Th] > Qhorse[Qh])
			{
				sum = sum + 200;
				Th = Th + 1;
				Qh = Qh + 1;
			}
			else if(Thorse[Th] < Qhorse[Qh])
			{
				sum = sum - 200;
				Qh = Qh + 1;
				Tt = Tt - 1;
			}
			else
			{
				if(Thorse[Tt] > Qhorse[Qt])
				{
					sum = sum + 200;
					Tt = Tt - 1;
					Qt = Qt - 1;
				}
				else
				{
					if(Thorse[Tt] < Qhorse[Qh])
					{
						sum = sum - 200;
						Tt = Tt - 1;
						Qh = Qh + 1;
					}
					else
					{
						Tt = Tt - 1;
						Qh = Qh + 1;
					}
				}
			}
		}
		cout<<sum<<endl;
	}
	return 0;
}
