int main(){
	char sz[300][100];
	char zf[30001];
	int result[300];
	int n=0,k=0,i,num=0;
	gets(zf);
	num=strlen(zf);
	for(i=0;i<num;i++){
		if(zf[i]!=' '){
			sz[n][k]=zf[i];
			k++;
		}else{
			sz[n][k]='\0';
			if(zf[i+1]!=' '){
			n++;
			k=0;
			}
		}
	}sz[n][k]='\0';
	for(i=0;i<=n;i++){
		result[i]=strlen(sz[i]);
	}for(i=0;i<n;i++){
		printf("%d,",result[i]);
	}printf("%d",result[n]);
	return 0;
}
