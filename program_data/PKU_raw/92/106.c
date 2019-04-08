
int main()
{
	int king_horse[1010], tian_horse[1010], king_head, tian_head, king_tail, tian_tail, n = 0, i = 0, sum = 0, flag = 0;
	while (cin >> n && n != 0)
	{
		sum = 0;
		flag = 0;
		for (i = 0; i < n; i ++)
			cin >> tian_horse[i];
		for (i = 0; i < n; i ++)
			cin >> king_horse[i];
		sort(tian_horse, tian_horse + n);
		sort(king_horse, king_horse + n);
		king_head = tian_head = 0;
		king_tail = tian_tail = n - 1;
		while (king_head <= king_tail && tian_head <= tian_tail)
		{
			if (tian_horse[tian_tail] > king_horse[king_tail])
			{
				sum = sum + 200;
				tian_tail --;
				king_tail --;
			}
			else
			{
				while (king_head <= king_tail && tian_head <= tian_tail)
				{
					if (tian_horse[tian_head] > king_horse[king_head])
					{
						sum = sum + 200;
						tian_head ++;
						king_head ++;
					}
					else
					{
						if (tian_horse[tian_head] < king_horse[king_tail])
							sum = sum - 200;
						tian_head ++;
						king_tail --;
						break;
					}
				}
			}
			if (tian_horse[tian_head] > king_horse[king_tail])
			{
				flag = 1;
				break;
			}
		}
		if (flag == 1)
			sum = sum + (tian_tail - tian_head + 1) * 200;
		cout << sum << endl;
	}
	return 0;
}