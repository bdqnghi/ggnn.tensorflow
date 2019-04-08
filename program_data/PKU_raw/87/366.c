int main()
{
	int sz[1000][6],result[1000];
	int i,j,p=1;
	for(i=0;i<1000;i++){
		for(j=0;j<6;j++){
    		scanf("%d",&sz[i][j]);
		}
	}
	for(i=0;i<1000;i++){
		if(sz[i][0]!=0){
			result[i]=(sz[i][3]-sz[i][0])*60*60+(sz[i][4]-sz[i][1])*60+sz[i][5]-sz[i][2]+12*60*60;
			printf("%d\n",result[i]);
		}
		if(sz[i][0]==0){
			p=0;
			break;
		}
	}
	return 0;
}