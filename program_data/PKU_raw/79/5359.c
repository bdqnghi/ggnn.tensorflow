
int main () {
	int n, m;
	while (true) {
		scanf("%d%d", &n, &m);
		if (n == 0 && m == 0) {
			break;
		}
		int count = n;
		int currentIndex = 0;
		int flags[302];
		for (int i = 0; i < n; i++) {
			flags[i] = i + 1;
		}
		while (count != 1) {
			int currentNumber = 1;
			while (currentNumber != m) {
				currentNumber++;
				currentIndex = (currentIndex + 1) % count;
			}
			
			// delete the element in currentIndex.
			for (int i = currentIndex + 1; i < count; i++) {
				flags[i - 1] = flags[i];
			}
			count--;
		}
		printf("%d\n", flags[0]);
	}
}