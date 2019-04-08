
int main(){
	char word[41];
	int n, cnt, len;

	scanf("%d", &n);
	cnt = 0;
	while (n--){
		scanf("%s", word);
		len = strlen(word);
		if (cnt == 0){
			printf("%s", word);
			cnt = len;
		}else if (cnt + len < 80){
			printf(" %s", word);
			cnt += len + 1;
		}else{
			printf("\n%s", word);
			cnt = len;
		}
	}

	return 0;
}