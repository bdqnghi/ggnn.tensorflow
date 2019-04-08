int main(){
    int a=0,i,shu[200]={0};
	char zi[301];
	scanf("%s",zi);
    for(i=0;i<strlen(zi);i++){
		if(((zi[i]>64)&&(zi[i]<91))||((zi[i]>96)&&(zi[i]<123))){
          shu[zi[i]-'A']++;
		  a=1;
		}
	}
	for(i=0;i<26;i++){
		if(shu[i]>0){
		printf("%c=%d\n",i+'A',shu[i]);
		}
	}
	for(i=32;i<58;i++){
		if(shu[i]>0){

		printf("%c=%d\n",i+'A',shu[i]);
		}
	}
	if(a==0){
		printf("No\n");
	}
	return 0;
}