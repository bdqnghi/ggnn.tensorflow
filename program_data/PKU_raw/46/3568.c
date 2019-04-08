
int main(){
    int h,l;
	int i,j,n,t=0;
	int sz[100][100];
	scanf("%d%d",&h,&l);
	for(i=0;i<h;i++){
		for(j=0;j<l;j++){
			scanf("%d",&sz[i][j]);
		}
	}
	for(n=0;;n++){
		for(i=n,j=n;j<l-n;j++){
			printf("%d\n",sz[i][j]);
			t++;
		}
		if(t==h*l){
			break;}
		for(j=l-1-n,i=1+n;i<h-n;i++){
			printf("%d\n",sz[i][j]);
			t++;
		}
		if(t==h*l){
			break;}
		for(i=h-1-n,j=l-2-n;j>=n;j--){
			printf("%d\n",sz[i][j]);
			t++;
		}
		if(t==h*l){
			break;}
		for(j=n,i=h-2-n;i>n;i--){
			printf("%d\n",sz[i][j]);
			t++;
		}
		if(t==h*l){
			break;}
	}
	return 0;
}
