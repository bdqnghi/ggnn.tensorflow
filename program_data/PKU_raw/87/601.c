int main(){
    int sz[1000][6];
	int i,k,j=0,sum=0;
	for(i=0;i<110;i++){
	scanf("%d %d %d %d %d %d",&sz[i][0],&sz[i][1],&sz[i][2],&sz[i][3],&sz[i][4],&sz[i][5]);
	j++;
	if(sz[i][0]==0)
		break;
	}
	for(k=0;k<j-1;k++){
	sum+=12*3600-sz[k][0]*3600-sz[k][1]*60-sz[k][2]+sz[k][3]*3600+sz[k][4]*60+sz[k][5];
	printf("%d\n",sum);
	sum=0;
	}
return 0;
}