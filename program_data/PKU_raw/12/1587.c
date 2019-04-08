
int main() {
	while(1) {
		int i = 0, a[16];
		scanf("%d", &a[i]);
		if(a[i] == -1) {
			break;//
		}

		int b[105] = {0};
		b[a[i]] = 1;

		while(1) {
			i++;
			scanf("%d", &a[i]);
			if(a[i] == 0) {
				break;
			}
			b[a[i]] = 1;
		}

		int j;
		int total = 0;
		for(j = 1; j < 50; j++) {
			if(b[j] == 1 && b[j*2] == 1) {
				total++;
			}
		}
		printf("%d\n", total);
	}
	return 0;
}