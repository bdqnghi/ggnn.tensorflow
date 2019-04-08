int main() {
	int k,m,n,i;
	int sz[ROW][COL];
	scanf("%d\n",&n);
	for(k=0;k<n;k++){
		for(m=0;m<2;m++){
		    scanf(" %d", &(sz[k][m]));
		}
	}
	i=0;
	for(k=0;k<n;k++){
		if((sz[k][0])==(sz[k][1])+1||(sz[k][0])==(sz[k][1])-2){
			i--;}
		if((sz[k][0])==(sz[k][1])-1||(sz[k][0])==(sz[k][1])+2){
			i++;}
	}
	if(i>0){printf("A");}
	if(i<0){printf("B");}
	if(i==0){printf("Tie");}
	return 0;
}