int main(){
	int i,k,n,sz[100][6],s[1000];
	for(i=0;i<100;i++){
		for(k=0;k<6;k++){
			scanf("%d",&sz[i][k]);}
		if(sz[i][0]==0&&sz[i][1]==0&&sz[i][2]==0&&sz[i][3]==0&&sz[i][4]==0&&sz[i][5]==0){break;}
	}
	for(n=0;n<i;n++){
		s[n]=60-sz[n][2]+sz[n][5]+(60-sz[n][1]-1+sz[n][4])*60+(12-sz[n][0]-1+sz[n][3])*60*60;
	}
	for(n=0;n<i;n++){
		printf("%d\n",s[n]);
	}
	return 0;
}
