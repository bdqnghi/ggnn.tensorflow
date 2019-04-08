
int main()
{
	int n, i, leftJi, leftQi, rightJi, rightQi, tianJi[1000], kingQi[1000], result;

	for (cin >> n;  n > 0; cin >> n)
	{
		for (i = 0; i < n; ++i) cin >> tianJi[i];
		for (i = 0; i < n; ++i) cin >> kingQi[i];

		sort(tianJi, tianJi + n);
		sort(kingQi, kingQi + n);

		result = 0;
		leftJi = leftQi = 0;
		rightJi = rightQi = n - 1;

		while (leftJi <= rightJi)
		{
			if (tianJi[leftJi] > kingQi[leftQi])
			{
				++leftJi;
				++leftQi;
				result += 200;
				continue;
			}

			if (tianJi[rightJi] > kingQi[rightQi])
			{
				--rightJi;
				--rightQi;
				result += 200;
				continue;
			}

			if (tianJi[leftJi] < kingQi[rightQi]) result -= 200;
			++leftJi;
			--rightQi;
		}

		cout << result << endl;
	}
	return 0;
}