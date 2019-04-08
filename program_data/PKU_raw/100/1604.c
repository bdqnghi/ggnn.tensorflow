int main(){
	char s[300], bian='A';
	int i, j, k, flag=0;
	scanf("%s", s);
	for(j=0;s[j]!='\0';j++){
		if((s[j]>='A'&&s[j]<='Z')||(s[j]>='a'&&s[j]<='z')){
			flag=1;
		}
	}
	if(flag==0){
		printf("No");
	}
	for(i=0;i<26;i++){
		k=0;
		for(j=0;s[j]!='\0';j++){
			if(s[j]==bian){
				k++;
			}
		}
		if(k!=0){
			printf("%c=%d\n", bian, k);
		}
		bian++;
	}
	bian='a';
	for(i=0;i<26;i++){
		k=0;
		for(j=0;s[j]!='\0';j++){
			if(s[j]==bian){
				k++;
			}
		}
		if(k!=0){
			printf("%c=%d\n", bian, k);
		}
		bian++;
	}
	return 0;
}