int main(){
int n,i,k;
char sz[500];
scanf("%d",&n);
for(i=1;i<=n;i++){
	scanf("%s",sz);
	for(k=0;sz[k]!='\0';k++){
		if(sz[k]=='A'){
			sz[k]='T';
		}else if(sz[k]=='T'){
			sz[k]='A';
		}else if(sz[k]=='G'){
			sz[k]='C';
		}else if(sz[k]=='C'){
			sz[k]='G';	
		}
	}
	sz[k]='\0';
	printf("%s\n",sz);
}
	return 0;
}
