int main(){
	int n;
	scanf("%d",&n);
	char zfc[n][257];
	for(int i=0;i<n;i++){
		scanf("%s",zfc[i]);
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<257;j++){
			if(zfc[i][j]=='A'){
				zfc[i][j]='T';
			}else{
				if(zfc[i][j]=='T'){
					zfc[i][j]='A';
				}else{
					if(zfc[i][j]=='C'){
						zfc[i][j]='G';
					} else{
						if(zfc[i][j]=='G'){
							zfc[i][j]='C';
						}else{
							break;
						}}}}}}
	for(int i=0;i<n;i++){
		printf("%s\n",zfc[i]);
	}
	return 0;}
