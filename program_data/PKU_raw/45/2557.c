int main(){
	int a[11],i,j,t,e;
	char s[60],w[60];
	scanf("%s",s);
	scanf("%s",w);
	
	
	for(i=0;i<=50;i++){
		e=1;
		for(j=0;j<strlen(s);j++){
			if(s[j]!=w[j+i]){
				e=0;
			}
		}
		if(e){

			printf("%d",i);
			return 0;
		}
	}
	
	return 0;
}

