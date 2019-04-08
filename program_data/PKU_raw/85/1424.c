int main(){
	char s[21];
	int n,j,i,c=0,l;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",s);
		l=strlen(s);
		for(j=1;j<l;j++){
			if((s[j]=='_')||(s[j]>='a'&&s[j]<='z')||(s[j]>='A'&&s[j]<='Z')||(s[j]>='0'&&s[j]<='9')){
				c++;
			}
		}
		if((s[0]=='_')||(s[0]>='a'&&s[j]<='z')||(s[0]>='A'&&s[j]<='Z')){
			c++;
		}
		if(c==l){
			printf("yes\n");
		}else{
			printf("no\n");
		}
		c=0;
	}
	return 0;
}