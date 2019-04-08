int main()
{
	int n,m,i,j;
	char zfc[1000][1000];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",zfc[i]);
	}
    for(i=0;i<n;i++){
		m=strlen(zfc[i]);
		for(j=0;j<m-1;j++){
			if(zfc[i][j]=='A'){
				printf("T");
			}
            if(zfc[i][j]=='T'){
				printf("A");
			}
			if(zfc[i][j]=='C'){
				printf("G");
			}
			if(zfc[i][j]=='G'){
				printf("C");
			}
		}
        if(zfc[i][m-1]=='A'){
				printf("T\n");
			}
        if(zfc[i][m-1]=='T'){
				printf("A\n");
			}
	    if(zfc[i][m-1]=='C'){
				printf("G\n");
			}
	    if(zfc[i][m-1]=='G'){
				printf("C\n");
			}
		m=0;
	}
	return 0;
}