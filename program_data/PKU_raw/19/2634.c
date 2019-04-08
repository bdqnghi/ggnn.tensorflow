int main(){
	char zf[600],dc[30][30],y[30],h[30];
	gets(zf);
	gets(y);
	gets(h);
	int n=strlen(zf),a=0,b=0;
    for(int i=0;i<n+1;i++){
		if(zf[i]!=' '&&zf[i]!='\n'){
			dc[a][b]=zf[i];
			b++;
		}else{
			dc[a][b]='\0';
			a++;
			b=0;
		}
	}
	for(int k=0;k<a+1;k++){
		if(strcmp(dc[k],y)==0){
			strcpy(dc[k],h);
		}
	}
	printf("%s",dc[0]);
	for(int m=1;m<a+1;m++){
		printf(" %s",dc[m]);
	}
	return 0;
}
