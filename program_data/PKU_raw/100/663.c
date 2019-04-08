int main(){
	char n[300];
	scanf("%s",n);
	int zm[26];
	int i,j,cd,jg=0;
	for(i=0;i<26;i++){
		zm[i]=0;
	}
	cd=strlen(n);
	
	for(j=0;j<cd;j++){
		i=(n[j]-'a');
		if(i<26&&i>=0){
			zm[i]++;
		}
	}
	
	for(i=0;i<26;i++){
		if(zm[i]>0){
			jg=1;
			break;
		}
	}
	if(jg==0){
		printf("No\n");
	}else{
		for(i=0;i<26;i++){
			if(zm[i]>0){
				printf("%c=%d\n",'a'+i,zm[i]);
			}
		}
	}
	return 0;
}