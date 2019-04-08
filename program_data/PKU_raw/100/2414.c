

int main() {
	char data[301];
	int big[26]={0};
	int sma[26]={0};
	int sign=0, i;
	scanf("%s" ,data);
	for(i=0;data[i]!='\0';i++) {
		if(data[i]<='Z'&&data[i]>='A') {
			big[data[i]-'A']+=1;
		}
		if(data[i]<='z'&&data[i]>='a') {
			sma[data[i]-'a']+=1;
		}
	}

	for(i=0;i<26;i++) {
		if(big[i]!=0) {
			sign+=1;
		}
		if(sma[i]!=0) {
			sign+=1;
		}
	}
	if(sign==0) {
		printf("No");
	} else {
		for(i=0;i<26;i++) {
			if(big[i]!=0) {
				printf("%c=%d\n", 'A'+i, big[i]);
			}
		}
		for(i=0;i<26;i++) {
			if(sma[i]!=0) {
				printf("%c=%d\n", 'a'+i, sma[i]);
			}
		}
	}
	return 0;
}