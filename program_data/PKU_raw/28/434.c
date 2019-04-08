int main(){
	char s[300][100];
	int i = 0;
	scanf("%s",s[i]);
	printf("%d",strlen(s[i]));
	while(1){
		i++;
		scanf("%s",s[i]);
		if(strcmp(s[i],s[i-1])==0 || strlen(s[i]) == 0 )
			break;
		else{
			printf(",");
			printf("%d",strlen(s[i]));
		}
	}
}