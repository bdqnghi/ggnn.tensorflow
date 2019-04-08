int main(){
	char s[51],w[51];
	char zfc[2][51];
	int i=0,j=0,n=0,m=0,k=0;
	for(k=0;k<2;k++){
		scanf("%s",zfc[k]);
	}
	strcpy(s,zfc[0]);
	strcpy(w,zfc[1]);
    n=strlen(s);
	for(i=0;w[i]!='\0';i++){
		if(w[i]==s[j]){
		
			if(memcmp(s,w+i,n)==0){
				m=i;
				break;
			}
		}
	}
	printf("%d",m);
	return 0;
}
