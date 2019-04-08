
int compare(char s1[],char s2[]){
	int i;
	for(i=0;i<(int)strlen(s1);i++){
		if(s1[i]!=s2[i])
			return 0;
	}
	return 1;
}

void main(){
	char s1[50],s2[50];
	int i;
	scanf("%s%s",s1,s2);
	for(i=0;i<=strlen(s2)-strlen(s1);i++){
		if(compare(s1,&s2[i])==1){
			printf("%d",i);
			return;
		}
	}
}