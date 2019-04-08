int main(){
    int h,tag=0,i,j,n,xy[100][2],sz[2];
	sz[0]=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<2;j++){
		   scanf("%d",&xy[i][j]);
		}
	}
	for(h=0;h<n;h++){
		if(xy[h][0]>=90&&xy[h][0]<=140&&xy[h][1]>=60&&xy[h][1]<=90){
              tag++;
		}
		else{
			if(sz[0]<tag){
			sz[0]=tag;
			tag=0;
			}
			else{
				tag=0;
			}
		}
	}
	if(sz[0]<tag){
		sz[0]=tag;
	}
	printf("%d",sz[0]);
	return 0;
}