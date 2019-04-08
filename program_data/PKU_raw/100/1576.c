int main()
{
	char str[301];
	int count[52] = {0};
	int i, flag = 0;

	scanf("%s",str);

	i = 0;
	while (str[i] != '\0') {
		if ((str[i] >= 'A') && (str[i] <= 'Z')) {
			count[str[i] - 'A']++;
		}
		else if ((str[i] >= 'a') && (str[i] <= 'z')) {
			count[str[i] - 'a' + 26]++;
		}
		i++;
	}

	for (i = 0; i < 26; i++) {
		if (count[i] > 0) {
			printf("%c=%d\n", i + 'A', count[i]);
			flag++;
		}
	}
	for (; i < 52; i++) {
		if (count[i] > 0) {
			printf("%c=%d\n", i + 'a' - 26, count[i]);
			flag++;
		}
	}
	if (!flag)
		printf("No\n");

	return 0;
}