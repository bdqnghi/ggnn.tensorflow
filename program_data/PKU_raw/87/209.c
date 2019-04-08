int main(){
	int i,j,t[10000][6],T;
	for(i=0;;i++){
		for(j=0;j<6;j++){
			scanf("%d",&t[i][j]);
		}
		if(t[i][0]==0){
			return 0;
		}
		T=(t[i][3]+12-t[i][0])*3600+t[i][4]*60+t[i][5]-t[i][1]*60-t[i][2];
		printf("%d\n",T);
	}
}
		

