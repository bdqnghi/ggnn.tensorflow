int main(){
	int i,j,t;
	int n,k=0,m=0,s=0;
	int sz[100][2],lx[100]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<2;j++){
			scanf("%d",&sz[i][j]);
		}
	}
	for(i=0;i<n;i++){
		if((sz[i][0]>=90)&&(sz[i][0]<=140)&&(sz[i][1]>=60)&&(sz[i][1]<=90)){
			lx[k]++;
		}
		else{
			k++;
		}
			
	}
	for(j=0;j<k;j++){
		for(i=0;i<k-j;i++){
			if(lx[i]<lx[i+1]){
				t=lx[i];
				lx[i]=lx[i+1];
				lx[i+1]=t;
			}
		}
	}


	
	printf("%d",lx[0]);




	return 0;
}




