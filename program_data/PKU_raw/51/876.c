
int main() {

	int n;
	char s[1000];
	char str[500][500];
	char result[500][500];
	scanf("%d", &n);
	scanf("%s", s);
	int i, j, k;
	int len = strlen(s) - n + 1;
	for (i = 0; i < len; i++) {
		for (j = 0; j < n; j++) {
			str[i][j] = s[i + j];
		}
		str[i][j] = '\0';
	}
	for (i = 0; i < len; i++) {
		for (j = 0; j < len - 1; j++) {
			if (strcmp(str[j], str[j + 1]) > 0) {
				char temp[1000];
				strcpy(temp, str[j]);
				strcpy(str[j], str[j + 1]);
				strcpy(str[j + 1], temp);
			}
		}
	}
	int max = 1;
	int count = 1;
	for (i = 1; i < len; i++) {
		if (strcmp(str[i], str[i - 1]) == 0) {
			count++;
			if (count > max) {
				max = count;
			}
		} else {
			count = 1;
		}
	}
	if (max <= 1) {
		printf("NO\n");
		return 0;
	}
	printf("%d\n", max);
	int num = 0;
	count = 1;
	for (i = 1; i < len; i++) {
		if (strcmp(str[i], str[i - 1]) == 0) {
			count++;
			if (count == max) {
				strcpy(result[num], str[i]);
				num++;
			}
		} else {
			count = 1;
		}
	}

	for (i = 0; i < num; i++) {
		for (j = 0; j < num - 1; j++) {
			if (strstr(s, result[j]) > strstr(s, result[j + 1])) {
				char temp[1000];
				strcpy(temp, result[j]);
				strcpy(result[j], result[j + 1]);
				strcpy(result[j + 1], temp);
			}
		}
	}
for (i = 0; i < num; i++) {
		printf("%s\n", result[i]);
	}

	return 0;
}

