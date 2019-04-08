
int main() {
	char part[100], full[1000], change[100];
	char new[1000];
	char *diff2;
	gets(full);
	gets(part);
	gets(change);


	//chech which word
	int partlen=strlen(part);
	int fulllen=strlen(full);
	int which=0;
	int end=fulllen - partlen;

	int i,j;
	int yes;
        int start=0;
        full[-1]=' ';
	for (i=0; i<=end; i++) {
		yes=1;
		for (j=0; j<partlen; j++) {
			if (full[i+j]!=part[j]) {
				yes=0;
			}
		}
		if (yes==1 && full[i-1]==' ') {
			which=i;
			strcpy(new,full);
			new[which]='\0';
			strcat(new,change);
			diff2=&full[which+partlen];
			strcat(new,diff2);
			strcpy(full,new);
                        i+=strlen(change);
		}

	}

	printf("%s",full);

	return 0;
}
