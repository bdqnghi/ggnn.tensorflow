
int main(){
	char zfc[256],str[256]={0};
	gets(zfc);
	int len=strlen(zfc),k=0;
	for(int i=0;i<len;i++){
		if(zfc[i]==' '&&zfc[i+1]==' '){
			continue;
		}else{
			str[k]=zfc[i];
			k++;
		}
	}
	puts(str);
	return 0;
}