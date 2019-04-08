
int main() {
	char a[1000];
	char b[1000];
	scanf("%s%s", a, b);
	int flag[200];
	memset(flag, 0, sizeof(flag));
	int lenA = strlen(a);
	int lenB = strlen(b);
	for(int i = 0; i < lenA; i++) {
		flag[a[i]]++;
	}
	if(lenA != lenB) {
		printf("NO");
		return 0;
	}
	for(int i = 0; i < lenB; i++) {
		flag[b[i]]--;
		if(flag[b[i]] < 0) {
			printf("NO");
			return 0;
		}
	}
	printf("YES");
	return 0;
}