int main(){
	int len,i,j,p=0;
	int count[2][26]={0};
	char zf[300];
	scanf("%s",zf);
	len=strlen(zf);
	for(i=0;i<len;i++){
		for(j=0;j<26;j++){
			if(zf[i]=='A'+j){
				count[0][j]++;
				p=1;
			}
			if(zf[i]=='a'+j){
				count[1][j]++;
				p=1;
			}
		}
	}
	if(p==0){
		printf("No");
	}
	else{
		
		for(j=0;j<26;j++){
			if(count[0][j]!=0){
			printf("%c=%d\n",'A'+j,count[0][j]);
			}
		}
		for(j=0;j<26;j++){
			if(count[1][j]!=0){
				printf("%c=%d\n",'a'+j,count[1][j]);
			}
		}
	}
	return 0;
}

	