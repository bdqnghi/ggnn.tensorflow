
int main()
{
    int i, n, a[300], avg = 0, maxn = 0;
    scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
		a[i] *= 100;
		avg += a[i];
	}
	avg /= n;
	for (i = 0; i < n; i++)
		if (maxn < (a[i]>avg?a[i]-avg:avg-a[i]))
			maxn = a[i]>avg?a[i]-avg:avg-a[i];
	for (i = 0; i < n; i++)
		if ((a[i]>avg?a[i]-avg:avg-a[i]) == maxn) {
			printf("%d", a[i] / 100);
			break;
		}
	for (i = i + 1; i < n; i++)
		if ((a[i]>avg?a[i]-avg:avg-a[i]) == maxn)
			printf(",%d", a[i] / 100);
    return 0;
}
