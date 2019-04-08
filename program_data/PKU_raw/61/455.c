

int main()
{
	int n = 0;
	int a = 0;
	int i = 0;
	int tmp1 = 1;
	int tmp2 = 1;
	int tmp;

	scanf("%d", &n);

	while (n--) {
		scanf("%d", &a);

		if (a <= 2) {
			printf("1\n");
		}
		else {
			for (i = 2; i < a; i++) {
				tmp = tmp2;
				tmp2 = tmp1 + tmp2;
				tmp1 = tmp;
			}
			printf("%d\n", tmp2);
		}
		tmp1 = 1;
		tmp2 = 1;
	}
	return 0;
}