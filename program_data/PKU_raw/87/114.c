int main(){
	int sz[5],n=43201,i,m=0,sz1[100],a=1;
	while(a>0){
		for(i=0;i<6;i++){
			scanf("%d",&sz[i]);
		}
		if(sz[0]!=0){
			n=60*60*(12+sz[3]-sz[0])+60*(sz[4]-sz[1])+sz[5]-sz[2];
			sz1[m]=n;
			m=m+1;
		}
		else{
			a=0;
		}
	}
	for(i=0;i<m-1;i++){
		printf("%d\n",sz1[i]);
	}
	printf("%d",sz1[m-1]);
	return 0;
}