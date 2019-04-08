

int main()
{
    char zfc[1000][256];
	int n,y;
	scanf("%d\n",&n);
	for(int i=0;i<n-1;i++){
		scanf("%s\n",zfc[i]);
	}
	scanf("%s",zfc[n-1]);
	for(int i=0;i<n;i++){
        y=strlen(zfc[i]);
		for(int j=0;j<y;j++){
			if(zfc[i][j]=='A'){
				zfc[i][j]='T';
			}
			else if(zfc[i][j]=='T'){
				zfc[i][j]='A';
			}
			else if(zfc[i][j]=='C'){
				zfc[i][j]='G';
			}
			else{
				zfc[i][j]='C';
			}
		}
		printf("%s\n",zfc[i]);
	}
	return 0;
}
