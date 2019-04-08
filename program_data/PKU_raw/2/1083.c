
struct author {
	char id;
	int count;
	int books[1000];
};

int cmp(const void *a, const void *b) {
	const struct author *pa = (const struct author *) a;
	const struct author *pb = (const struct author *) b;
	return pb->count - pa->count;
}

int main() {
	int i, j, num, id, len, idx;
	struct author authors[26]; // 'A' -- 'Z'
	char c;
	char buffer[26];

	for (i = 0; i < 26; ++i) {
		authors[i].id = 'A' + i;
		authors[i].count = 0;
	}

	scanf("%d", &num);
	for (i = 0; i < num; ++i) {
		scanf("%d %s", &id, buffer);
		len = strlen(buffer);
		for (j = 0; j < len; ++j) {
			idx = buffer[j] - 'A';
			authors[idx].books[authors[idx].count] = id;
			authors[idx].count++;
		}
	}

	qsort(authors, 26, sizeof(struct author), cmp);

	printf("%c\n", authors[0].id);
	printf("%d\n", authors[0].count);
	for (i = 0; i < authors[0].count; ++i)
		printf("%d\n", authors[0].books[i]);
}
