int main(){
	int i,l,k,b;
	char zfc[1000];
	
	b=0;
	gets(zfc);
	l=strlen(zfc);
	for(i=0;i<l-1;i++){
		if(zfc[i]==' '&&zfc[i+1]==' '){
			for(k=i+1;k<l-1;k++){
				zfc[k]=zfc[k+1];
			}
			i--;
			b++;
		}
	}
	if(b!=0){
		zfc[l-b]=0;
	}
    printf("%s",zfc);

return 0;
}