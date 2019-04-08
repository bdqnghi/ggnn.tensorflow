
int main() {

	char ch[1000];
	//scanf("%s", ch);
	gets(ch);
	int len = strlen(ch);

	int i;
	for(i = 0; i < len; i++) {
		if(ch[i] != ' ') {
			printf("%c" , ch[i]);
		} else {
			if(ch[i-1] == ' ') {

			} else {
				printf(" ");
			}
		}
	}

	printf("\n");


	return 0;
}