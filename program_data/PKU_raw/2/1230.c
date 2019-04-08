
struct Article {
	int number;
	char author[26];
};

int main()
{
	struct Article book[1000];
	int m, i;
	int j, k;
	int c;
	int max = 0;
	int writer[26] = {0};
	
	scanf("%d",&m);
	for (i = 0; i < m; i++) {
		scanf("%d %s",&book[i].number,book[i].author);
	}
	
	for (i = 0; i < m; i++) {
		for (j = 0; j < 26; j++) {
			if (book[i].author[j] >= 'A' && book[i].author[j] <= 'Z') {
				c = book[i].author[j] - 'A';
				writer[c]++;
			}
		}
	}
	
	for (i = 0; i < 26; i++) {
		if (max < writer[i]) {
			max = writer[i];
		}
	}
	
	for (i = 0; i < 26; i++) {
		if (max == writer[i]) {
			printf("%c\n",i + 'A');
			printf("%d\n",max);
			for (j = 0; j < m; j++) {
				for (k = 0; k < 26; k++) {
					if (book[j].author[k] == i + 'A') {
						printf("%d\n",book[j].number);
					}
				}
			}
			break;
		}
	}
	return 0;
}