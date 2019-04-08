int main(){
    char sen[MAX][MAX]={0};
	int i,e;
    for(i=0;i<MAX;i++){
		scanf("%s",sen[i]);
	}
	printf("%s",sen[0]);
	for(i=1;sen[i][0];i++){
		printf(" %s",sen[i]);
	}
	return 0;
}