int main(){
    int n,i,j;
	scanf("%d",&n);
	char zfc[1000][300];
	for(i=0;i<n;i++){
		scanf("%s",zfc[i]);
	}
	for(i=0;i<n;i++){
		for(j=0;zfc[i][j]!='\0';j++){
			if(zfc[i][j]=='A'){
				zfc[i][j]='T';
			}else if(zfc[i][j]=='T'){
				zfc[i][j]='A';
			}else if(zfc[i][j]=='C'){
				zfc[i][j]='G';
			}else if(zfc[i][j]=='G'){
				zfc[i][j]='C';
			}
		}
	}
	for(i=0;i<n-1;i++){
		printf("%s\n",zfc[i]);
	}
	printf("%s",zfc[n-1]);
	return 0;
}