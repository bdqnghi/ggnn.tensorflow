int main()
{
    char ch, str[301];
    int i, len, no=1, counter[26]={0},s[26]={0};
    scanf("%s", str);
    len = strlen(str);
    for (i=0; i<len; i++) {
        ch = str[i];
        if (ch >= 'a' && ch <= 'z') {
            counter[ch-'a']++;
            no = 0;
		}
		if(ch>='A'&&ch<='Z'){
			s[ch-'A']++;
			no=0;
        }
    }
	for(ch='A';ch<='Z';ch++){
		if(s[ch-'A']>0){
			printf("%c=%d\n",ch,s[ch-'A']);
		}
	}
    for (ch='a'; ch<='z'; ch++) {
        if (counter[ch-'a'] > 0) {
            printf("%c=%d\n", ch, counter[ch-'a']);
        }
	}
    if (no) {
        printf("No");
    }
    return 0;
}