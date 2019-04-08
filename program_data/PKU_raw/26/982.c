int main(){
	char zfc[100];
	gets(zfc);
	int n;
	n=strlen(zfc);
	int i;
	printf("%c",zfc[0]);
	for(i=1;i<n;i++){
		if(zfc[i]!=' '){
			printf("%c",zfc[i]);
		}else if(zfc[i]==' '&&zfc[i-1]!=' '){
			printf("%c",zfc[i]);
		}
	}
	return 0;
}