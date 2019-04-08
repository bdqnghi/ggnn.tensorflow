int main() {
	char s[200];
	char s1[200];
	int i, j;
	int len;
	int m;
	int n;
	scanf("%s", s);
	len = strlen(s);
	m = 0;
	for(i=0, j=0; i<len; i++) {
		m = m*10 + s[i] - '0';
		if(m >= 13) {
			s1[j] = m/13 + '0';
			m = m%13;
			j++;
		} else {
			if(j != 0) {
				s1[j] = '0';
				j++;
			}
		}
	}
	if(j == 0) {
		s1[0] = '0';
		j=1;
	}
	s1[j] = '\0';
	printf("%s\n%d\n", s1, m);
	return 0;
}