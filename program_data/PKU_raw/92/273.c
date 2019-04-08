/*
 * PG-HorseRace.cpp
 *
 *  Created on: 2011-3-31
 *      Author: lyh
 */
int Cmp(const void * p1, const void * p2)
{
	int * C1 = (int *)p1;
	int * C2 = (int *)p2;
	return *C2 - *C1;
}
int main()
{
	int TianJi[1005];
	int QiKing[1005];
	int nHorses;
	int silver;
	while(cin >> nHorses && nHorses)
	{
		silver = 0;
		for(int i = 0; i < nHorses; i ++)
			cin >> TianJi[i];
		qsort(TianJi, nHorses, sizeof(TianJi[0]), Cmp);
		for(int i = 0; i < nHorses; i ++)
			cin >> QiKing[i];
		qsort(QiKing, nHorses, sizeof(QiKing[0]), Cmp);
		int Head = 0;
		int Tail = nHorses - 1;
		for(int i = 0; i < nHorses; i ++)
		{
			if(TianJi[Head] > QiKing[i])
			{
				Head ++;
				silver += 200;
				continue;
			}
			if(TianJi[Head] < QiKing[i])
			{
				Tail --;
				silver -= 200;
				continue;
			}
			if(i == nHorses - 1) break;
			int sum1 = 0;
			int sum2 = -200;
			for(int j = i + 1; j < nHorses; j ++)
			{
				if(TianJi[Head + j - i] > QiKing[j])sum1 += 200;
				else
				if(TianJi[Head + j - i] < QiKing[j])sum1 -= 200;

				if(TianJi[Head + j - i - 1] > QiKing[j]) sum2 += 200;
				else
				if(TianJi[Head + j - i - 1] < QiKing[j]) sum2 -= 200;
			}
			if(sum1 > sum2)
			{
				Head ++;
				continue;
			}
			else
			{
				Tail --;
				silver -= 200;
			}
		}
		cout << silver << endl;
	}
}
