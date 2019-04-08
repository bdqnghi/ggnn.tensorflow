int main(){
    char z[1000][1000],s[1000][1000];
	int n,i,k,a;
	scanf("%d",&n);
	for(i=0;i<=n-1;i++){
		scanf("%s\n",z[i]);
	}
	for(i=0;i<=n-1;i++){
		for(k=0;z[i][k]!=0;k++){
            if(z[i][k]=='A'){
				s[i][k]='T';
			}
			if(z[i][k]=='T'){
				s[i][k]='A';
			}
			if(z[i][k]=='C'){
				s[i][k]='G';
			}
			if(z[i][k]=='G'){
				s[i][k]='C';
			}
		}
	}
		for(i=0;i<=n-1;i++){
		printf("%s\n",s[i]);
		}
	return 0;
}