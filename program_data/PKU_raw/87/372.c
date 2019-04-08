int main(){
	int sa[100][6],i,j,n,sb[100];
	for(i=0;i<100;i++){
		for(j=0;j<6;j++){
			scanf("%d",&sa[i][j]);
		}
		if(sa[i][0]==0){
			break;
		}
	}
	n=i;
	for(i=0;i<n;i++){
		sb[i]=(12-sa[i][0]-1)*3600+(60-sa[i][1]-1)*60+60-sa[i][2]+3600*sa[i][3]+60*sa[i][4]+sa[i][5];
	}
	for(i=0;i<n;i++){
		printf("%d\n",sb[i]);
	}
	return 0;
}
