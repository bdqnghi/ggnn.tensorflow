int main(){
    char zfc[10005];
	gets(zfc);
	int i,l;
	l=strlen(zfc);
	for(i=0;i<l;i++){
		if(zfc[i]!=' '||(zfc[i]==' '&&zfc[i-1]!=' ')){
			printf("%c",zfc[i]);
		}
	}
	return 0;
}  