
int main() {


	int n;
	scanf("%d", &n);

	int visit[101] = {0};

	int i;
	for(i = 0; i < n; i++) {
		int num;
		scanf("%d", &num);
		if(visit[num] == 1) {

		} else {
			if(i != 0) {
				printf(" ");
			}
			printf("%d", num);
			visit[num] = 1;
		}
	}
	printf("\n");


	return 0;
}
