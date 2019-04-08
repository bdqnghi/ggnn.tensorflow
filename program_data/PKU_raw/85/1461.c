int main(){
	int i,j,n,t=0;
	char s[21];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",s);
		for(j=0;s[j];j++){
			if(!((s[j]=='_')||(s[j]>='A'&&s[j]<='Z')||(s[j]>='a'&&s[j]<='z')||(s[j]>='0'&&s[j]<='9'&&j>0))){
				t+=1;
			}
		}
		if(t==0){
			printf("yes\n");
		}else{
			printf("no\n");
		}
		t=0;
	}
	return 0;
}