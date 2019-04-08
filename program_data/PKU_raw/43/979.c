int p[11000], i, j, m;
int main() {
	for (i = 0, scanf("%d", &m); i <= m; i++)
		p[i] = 0;
	for (i = 2; i * i < m; i++) {
			for (j = i * 2;!p[i]&& j <= m; j += i)
				p[j]++;
	}
	for (i = 2; i <= m / 2; i++)
		if (p[i]+p[m - i] == 0)
			printf("%d %d\n", i, m - i);
	return 0;
}
