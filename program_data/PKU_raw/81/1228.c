int main()
{
	int i,j,m,n,sz[5][5],a=0,k,s[5];
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
	scanf("%d",&sz[i][j]);}}
	scanf("%d%d",&m,&n);
	if(m>=0&&m<5&&n>=0&&n<5){
	a=1;
	for(k=0;k<5;k++){
	s[k]=sz[m][k];sz[m][k]=sz[n][k];sz[n][k]=s[k];}
	for(i=0;i<5;i++){
		for(j=0;j<4;j++){
			printf("%d ",sz[i][j]);}
		printf("%d\n",sz[i][4]);}}
	if(a==0){printf("error");}
return 0;
}