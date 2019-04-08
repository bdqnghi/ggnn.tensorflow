int main(){
	int sz[100][6];
	int n=1000,i,k;
	int t[100];
	

	for(i=0;i<n;i++){
		scanf("%d%d%d%d%d%d",&sz[i][1],&sz[i][2],&sz[i][3],&sz[i][4],&sz[i][5],&sz[i][6]);
	}

	for(i=0;i<n;i++){
		if(sz[i][1]==0){
			k=i;
			break;
		}
	}
    for(i=0;i<k;i++){
		t[i]=(sz[i][4]+12-sz[i][1])*3600+(sz[i][5]-sz[i][2])*60+(sz[i][6]-sz[i][3]);
	}
	for(i=0;i<k;i++){
		printf("%d\n",t[i]);
	}

    
	return 0;
}
