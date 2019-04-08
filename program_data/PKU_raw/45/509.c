int main(){
	char str[50],str1[50];
	scanf("%s %s",str,str1);
	char *tmp = strstr(str1,str);
	int i,len = strlen(str1);
	for(i = 0;i < len;i++){
		if(strcmp(str1 + i,tmp) == 0){
			printf("%d",i);
			break;
		}
	}
	return 0;
}
