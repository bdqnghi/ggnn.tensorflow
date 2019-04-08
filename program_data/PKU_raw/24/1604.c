int main(){
	char str[2000];
	int i,len,sz[200],k=1,max,maxword=0,min,minword=0;
	gets(str);
	len=strlen(str);
    for(i=0;i<len;i++){
		if((str[i]==' '||str[i]==',')&&(str[i+1]!=' '&&str[i+1]!=',')){
        sz[k]=i+1;
		k++;
	   str[i]=0;
	}}
	sz[k]=len+1;
	    max=sz[1]-1;
		min=sz[1]-1;
	for(i=1;i<k;i++){
		if (sz[i+1]-sz[i]-1>max){
		max=sz[i+1]-sz[i]-1;
		maxword=sz[i];}
		else if(sz[i+1]-sz[i]-1<min){
			min=sz[i+1]-sz[i]-1;
			minword=sz[i];}
	}
	printf("%s\n",&str[maxword]);
	printf("%s\n",&str[minword]);
	
	return 0;
}
