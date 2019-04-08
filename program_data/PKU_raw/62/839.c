
int main(){
	char zfc[250];
	gets(zfc);
	int n=strlen(zfc);
	for(int i=0;i<n;i++){
		if(i==0){
			printf("%c",zfc[0]);
		}else if(zfc[i]!=' '){
			printf("%c",zfc[i]);
		}else if(zfc[i-1]!=' '){
			printf("%c",zfc[i]);
		}
	}
	return 0;
}
