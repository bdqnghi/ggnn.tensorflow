
struct Interval {
	int a, b;
} interval[MAXLEN], output[MAXLEN];

int cmp(const void *__a, const void *__b)
{
    struct Interval *_a = (struct Interval *) __a;
    struct Interval *_b = (struct Interval *) __b;
    if (_a -> a == _b -> a)
        return _a -> b - _b -> b;
    return _a -> a - _b -> a;
}

int main()
{
	int cases, left, right, cnt, i;
	scanf("%d", &cases);
	for (i = 0; i < cases; i ++)
	{
		scanf("%d %d", &interval[i].a, &interval[i].b);
	}
	qsort(interval, cases, sizeof(struct Interval), cmp);

	left = interval[0].a;
	right = interval[0].b;
	cnt = 0;
	for (i = 1; i < cases; i ++)
	{
		if (interval[i].a > right)
		{
            printf("no\n");
            return 0;
		}
		else
		{
			right = MAX(right, interval[i].b);
		}
	}
    printf("%d %d\n", left, right);
	return 0;
}