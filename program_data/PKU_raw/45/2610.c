int main() {
	char a[51],b[51], c[51];
	memset(a, 0, sizeof(a));
	memset(b, 0, sizeof(b));
	memset(c, 0, sizeof(c));
    int i, f;
	scanf("%s",a);
    scanf("%s",b);
    for(i=0;i<strlen(b);i++) {
		strcpy(c, &b[i]);
		c[strlen(a)] = '\0';
		if (strcmp(a, c) == 0) {
			printf("%d",i);
			break;
		}
	}
	getchar();getchar();
	return 0;
}
