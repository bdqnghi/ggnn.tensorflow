int main(){
	int n,sz[100][2],i,j,t=-1,k=-1;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<2;j++){
		scanf("%d",&sz[i][j]);
		}
	}
	for(i=0;i<n;i++){
		if(sz[i][0]<=140&&sz[i][0]>=90&&sz[i][1]<=90&&sz[i][1]>=60){
			t++;
			if(k<t){
				k=t;
			}
		}else{ 
			if(k<t){
			k=t;
			}
			t=-1;
		}
	}
	k+=1;
	printf("%d",k);

	return 0;
}