int main(){
	int t,i,j,k,p,m;
	char s[LEN];
	scanf("%d",&t);
	for(i=0;i<t;i++){
		m=0;
		scanf("%s",s);
		for(j=0;s[j];j++){
			p=0;
			if(s[j]!='A'){
				for(k=j+1;s[k];k++){
					if(s[k]==s[j]){
						p++;
						s[k]='A';
					}
				}
				if(p==0){
					printf("%c\n",s[j]);
					m=1;
					break;
				}
			}
		}
		if(m==0){
			printf("no\n");
		}
	}
	return 0;
}