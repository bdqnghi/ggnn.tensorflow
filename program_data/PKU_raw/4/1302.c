
int main(){
	int sz[100][100],ROW,COL;
	int i,j,z,t;
	scanf("%d %d",&ROW,&COL);
	for(j=0;j<ROW;j++){
		for(i=0;i<COL;i++){
			scanf("%d",&sz[j][i]);
		}
	}
	t=ROW+COL;
	for(z=0;z<t;z++){
		for(j=0;j<ROW;j++){
			i=z-j;
			if((i>=0)&&(i<COL)){
				printf("%d\n",sz[j][i]);
			}
		}
	}
	return 0;
}
