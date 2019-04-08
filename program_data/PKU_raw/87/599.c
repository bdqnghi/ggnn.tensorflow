int main(){
	int sz[1000][6],g,i;
	for(i=0;i<1000;i++){
	scanf("%d %d %d %d %d %d",&sz[i][0],&sz[i][1],&sz[i][2],&sz[i][3],&sz[i][4],&sz[i][5]);
        if(sz[i][1]==0&&sz[i][2]==0&&sz[i][3]==0&&sz[i][0]==0&&sz[i][4]==0&&sz[i][5]==0){break;}
	g=sz[i][5]+60-sz[i][2]+(sz[i][4]-1+60-sz[i][1])*60+(sz[i][3]+11-sz[i][0])*3600;
	printf("%d\n",g);}
	return 0;
}