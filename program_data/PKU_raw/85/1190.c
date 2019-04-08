int main(){
	int i,j,n;
	char s[2000];
	int r=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		r=0;
		scanf("%s",s);
		if((s[0]>='A'&&s[0]<='Z')||(s[0]>='a'&&s[0]<='z')||(s[0]=='_')){
			for(j=0;s[j]!='\0';j++){
				if((s[j]>='0'&&s[j]<='9')||(s[j]>='A'&&s[j]<='Z')||(s[j]>='a'&&s[j]<='z')||s[j]=='_'){
					r=0;
				}else{
					r=1;
				}
				if(r==1){
					break;
				}
			}
		}else{
			r=1;
		}
		if(r==0){
			printf("yes\n");
		}else{
			printf("no\n");
		}
	}
	return 0;
}

