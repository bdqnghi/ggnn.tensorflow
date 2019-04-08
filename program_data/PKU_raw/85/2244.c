int main(){
	int n, i, c, j;
	char s[30];
	scanf("%d", &n);
	for(i=1;i<=n;i++){
		scanf("%s",s);
		c=0;
		j=0;
		if((s[0]=='_')||('a'<=s[0]&&s[0]<='z')||('A'<=s[0]&&s[0]<='Z')){
			for(j=1;s[j]!='\0';j++){
				if(('0'<=s[j]&&s[j]<='9')||(s[j]=='_')||('a'<=s[j]&&s[j]<='z')||('A'<=s[j]&&s[j]<='Z')){
					c++;
				}
			}
			if(c==j-1){
				printf("yes\n");
			}
			else 	printf("no\n");
		}
	else printf("no\n");	 
	}
	
		return 0;
	}

