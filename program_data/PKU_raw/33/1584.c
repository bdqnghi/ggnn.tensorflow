int main(){
    int n,j,i;
	scanf("%d",&n);
	char s[n][300];
	for(i=0;i<n;i++){scanf("%s",s[i]);}
    
	for(i=0;i<n;i++){
		for(j=0;s[i][j]!='\0';j++){
			if(s[i][j]=='A'){s[i][j]='T';}else{
				if(s[i][j]=='T'){s[i][j]='A';}else{
					if(s[i][j]=='C'){s[i][j]='G';} else{
						if(s[i][j]=='G'){s[i][j]='C';}}}}}}
	for(int i=0;i<n;i++){printf("%s\n",s[i]);}
	return 0;
}
