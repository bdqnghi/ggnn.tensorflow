
// ???????
int n;
int self[1000], enemy[1000];

// ??
int result;

// ????
int compare(const void* a, const void* b)
{
	return *((int*)b) - *((int*)a);
}

// ????????
void play(int s, int e)
{
	if (s > e)
		result += 200;
	else if (s < e)
		result -= 200;
}

// ??????
int calcMax(void)
{
	int i, smax, smin, emax, emin;
	result = 0;
	smax = emax = 0;
	smin = emin = n - 1;
	for (i = 0; i < n; i++)
	{
		if (self[smin] > enemy[emin])
		{
			play(self[smin], enemy[emin]);
			smin--;
			emin--;
		}
		else if (self[smin] < enemy[emin])
		{
			play(self[smin], enemy[emax]);
			smin--;
			emax++;
		}
		else if (self[smax] > enemy[emax])
		{
			play(self[smax], enemy[emax]);
			smax++;
			emax++;
		}
		else
		{
			play(self[smin], enemy[emax]);
			smin--;
			emax++;
		}
	}
	return result;
}

int main(void)
{
	int i;
	while (scanf("%d", &n) != -1 && n != 0)
	{
		for (i = 0; i < n; i++)
			scanf("%d", &self[i]);
		qsort(self, n, sizeof(int), compare);
		for (i = 0; i < n; i++)
			scanf("%d", &enemy[i]);
		qsort(enemy, n, sizeof(int), compare);
		printf("%d\n", calcMax());
	}
	return 0;
}