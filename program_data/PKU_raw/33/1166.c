int main(){
	char zf[256],hb[256];
	int n,judge=0;
	scanf("%d",&n);
	for(int j=0;j<n;j++){
		scanf("%s",zf);
		for(int k=0;k<256;k++){
			hb[k]='\0';
		}
		for(int i=0;zf[i];i++){
			if(zf[i]=='A'){
				hb[i]='T';
			}
			if(zf[i]=='T'){
				hb[i]='A';
			}
			if(zf[i]=='C'){
				hb[i]='G';
			}
			if(zf[i]=='G'){
				hb[i]='C';
			}
		}
		printf("%s\n",hb);
	}
	return 0;
}