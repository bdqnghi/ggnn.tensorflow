int main()
{
	int i=0, b[26]={0}, sum=0, j;
	char s[300];
    scanf ("%s", s);
	while(s[i]) {
		j=s[i]-'a';
		if(j>=0&&j<=25) {
			b[j]++;
		sum=1;
		}
		i++;
	}
	for (j=0; j<26; j++) {
		if (b[j]!=0) printf("%c=%d\n", (j+'a'),b[j]);
	}
	if (sum==0) printf("No");
	return 0;
}
