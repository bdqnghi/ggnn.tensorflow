int main(){
	char str[1000];
	int i,len,k,sz[1000]={0};
	gets(str);
	len=strlen(str);
	for(i=0,k=1;i<len;i++){
		if(str[i-1]==' '&&str[i]!=' '){
        sz[k]=i;
		k++;
	
	}}
	for(i=0;i<len;i++){
		if (str[i]==' '){
			str[i]=0;
		}
	}

	for(i=0;i<k-1;i++){
		printf("%d,",strlen(&str[sz[i]]));}
	printf("%d",strlen(&str[sz[k-1]]));
 return 0;
}
