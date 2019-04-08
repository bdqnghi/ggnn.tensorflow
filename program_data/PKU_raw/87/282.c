int main(){
	int sz[100][6];
	int a,b,c,d,e,f,g,h,i,j,k,l=0;
	int m=0,n=0,t=0;
	for(i=0;i<100;i++){
		scanf("%d %d %d %d %d %d",&sz[i][0],&sz[i][1],&sz[i][2],&sz[i][3],&sz[i][4],&sz[i][5]);
		if(sz[i][0]==0&&sz[i][1]==0&&sz[i][2]==0&&sz[i][3]==0&&sz[i][4]==0&&sz[i][5]==0){
			break;}
			l++;
	}
	for(i=0;i<l;i++){

		//if(sz[i][3]<=12&&sz[i][3]>=sz[i][0]){
		//	t=3600*(sz[i][3]-sz[i][0])+sz[i][4]*60+sz[i][5]-sz[i][1]*60-sz[i][2];
	//	printf("%d\n",t);
	//	return 0;}
	//	if(sz[i][3]<sz[i][0]){
		m=12*3600-sz[i][0]*3600-sz[i][1]*60-sz[i][2];
		n=3600*sz[i][3]+60*sz[i][4]+sz[i][5];
		printf("%d\n",m+n);}
		//t=0;
	//	m=0;
		//n=0;
	
		return 0;
}