int main()
{
	int sz[8][8];
	int a,b,i,j;
	scanf("%d,%d",&a,&b);
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			scanf("%d",&sz[i][j]);
		}
	}
	int y=0,n=0;
	for(i=0;i<a;i++){
		for(j=0;j<b-1;j++){
			if(sz[i][y]<sz[i][j+1]){
				y=j+1;}
		}
		for(int k=0;k<a;k++){
			if(sz[i][y]<sz[k][y]){
				n++;}
		}
		if(n==a-1){
			break;}
	}
	if(n==a-1){
		printf("%d+%d",i,y);}
	else{
		printf("No");}
	return 0;
}

