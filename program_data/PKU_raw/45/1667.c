
int main() {
	char part[50], full[50];
	scanf("%s %s",part,full);
	int partlen=strlen(part);
	int fulllen=strlen(full);
	int which=0;
	int end=fulllen - partlen;

	int i,j;
	for (i=0; i<=end; i++) {
		int yes=1;
		for (j=0; j<partlen; j++) {
			if (full[i+j]!=part[j]) {
				yes=0;
			}
		}
		if (yes==1) {
			which=i;
			break;
		}

	}

	printf("%d",which);

	return 0;
}
