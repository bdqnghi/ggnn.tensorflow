int main(){
	char s[10000][21];
	int n,i,j;
    int c[10000]={0},d[10000]={0};
    scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",&(s[i]));  
	}
	for(i=0;i<n;i++){
		if(s[i][0]=='_'||(s[i][0]>='a'&&s[i][0]<='z')||(s[i][0]>='A'&&s[i][0]<='Z')){
			d[i]++;
		}
        else{
			c[i]=1;
		}
		for(j=0;s[i][j]!='\0';j++){
			if((s[i][j]>='a'&&s[i][j]<='z')||(s[i][j]>='A'&&s[i][j]<='Z')||(s[i][j]>='0'&&s[i][j]<='9')||s[i][j]=='_'){
				continue;
			}
		    else{
				c[i]=1;
			}
		}
	}
	for(i=0;i<n;i++){
	if(c[i]==0){
			printf("yes\n");
		}
		else{
			printf("no\n");
		}

	}
	return 0;
}

