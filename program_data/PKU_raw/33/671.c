int main(){
	char jj[1000][1001];
	char hb[1000][1001];
	int n;
	int i,k;
	scanf("%d\n",&n);
		for(i=1;i<=n;i++){
			gets(jj[i]);
		}
		for(i=1;i<=n;i++){
	    for(k=0;jj[i][k]!='\0';k++){
		if(jj[i][k]=='T'){
			hb[i][k]='A';
		}
		if(jj[i][k]=='A'){
			hb[i][k]='T';
	}
		if(jj[i][k]=='C'){
			hb[i][k]='G';
		}
		if(jj[i][k]=='G'){
			hb[i][k]='C';
		}
	}
	hb[i][k]='\0';
		}
        for(i=1;i<=n;i++){
        puts(hb[i]);
		}
    return 0;
}
