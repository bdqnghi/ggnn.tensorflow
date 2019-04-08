
int main()
{
	int max = 0, min = 100;
	int pos1, pos2;
	char words[50][100];
	int len[50];
	int i = 0,j;

	while (scanf("%s", words[i]) != EOF) {
		len[i] = strlen(words[i]);
		i++;
	}

	for (j =0; j < i; j++) {
		if (len[j] < min) {
			min = len[j];
			pos1 = j;
		}
		if (len[j] > max) {
			max = len[j];
			pos2 = j;
		}
	}

	printf("%s\n%s\n", words[pos2], words[pos1]);

	return 0;
}

