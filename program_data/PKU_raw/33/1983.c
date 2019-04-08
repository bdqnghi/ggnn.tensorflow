int main(){
	int n,i,k,l;
	char zfc[1000][256];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",zfc[i]);
	}
	for(i=0;i<n;i++){
        l=strlen(zfc[i]);
		for(k=0;k<l;k++){
		
			if(zfc[i][k]=='A'){
			zfc[i][k]='T';
		}
		else if(zfc[i][k]=='C'){
			zfc[i][k]='G';
		}
		else if(zfc[i][k]=='G'){
			zfc[i][k]='C';
			
		}
		else{
			zfc[i][k]='A';
		}
		}
		printf("%s\n",zfc[i]);
	}
		return 0;
}