int main(){
	char zfc[1000];
	int i;
	gets(zfc);
	for(i=0;zfc[i]!='\0';i++){
		if(zfc[i]!=' '){
			printf("%c",zfc[i]);
		}else{
			if(zfc[i+1]==' '){
				continue;
			}else{
				printf(" ");
			}
		}
	}
	return 0;
}
