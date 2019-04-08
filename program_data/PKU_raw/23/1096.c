void main(){
	int i,j;
	char some[30][30],it[30];
	for(i=0;i<30;i++){
		scanf("%s",&some[i]);
		scanf("%c",&it[i]);
		if(it[i]=='\n')
			break;
	}
	for(j=0;j<=i;j++){
		printf("%s",some[i-j]);
		if(j!=i)
			printf(" ");
	}
}