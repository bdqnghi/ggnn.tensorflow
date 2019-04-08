int main() {
	char s[200],s1[200];
	int i, j;
	int len;
	while(gets(s)) {
		len = strlen(s);
		strcpy(s1, s);
		for(i=0; i<len; i++) {
			if(s[i] == ')') {
				for(j=i-1; j>=0; j--) {
					if(s[j] == '(') {
						break;
					}
				}
				if(j >= 0) {
					s[i] = ' ';
					s[j] = ' ';
				} else {
					s[i] = '?';
				}

			} else if(s[i] != '(') {
				s[i] = ' ';
			}
		}
		for(i=0; i<len; i++) {
			if(s[i] == '(') s[i] = '$';
		}
		puts(s1);
		puts(s);
	

	}
	return 0;
}
