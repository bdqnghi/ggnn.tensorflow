int main(){
    int i;
	char str[101];
	gets(str);
	printf("%c",str[0]);
	for(i=1;i<strlen(str);i++){
		if(str[i]!=' '){
			printf("%c",str[i]);
		}else if(str[i-1]!=' '){
			printf(" ");
		}else{
			continue;
		}
	}
	printf("\n");
}
