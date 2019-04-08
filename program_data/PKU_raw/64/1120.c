int main(){
	int n,i;
	scanf("%d",&n);
	int sz[30];
	for(i=0;i<(3*n);i++){
		scanf("%d",&sz[i]);
	}

	double dd[10][10];
	int j,k;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			dd[i][j]=sqrt(1.0*((sz[3*i]-sz[3*j])*(sz[3*i]-sz[3*j])+(sz[3*i+1]-sz[3*j+1])*(sz[3*i+1]-sz[3*j+1])+(sz[3*i+2]-sz[3*j+2])*(sz[3*i+2]-sz[3*j+2])));
		}
	}
	
	double xin[45];
	int d,e;
	int di[45],dj[45];
	double max=0;
	for(k=0;k<n*(n-1)/2;k++){
		
		for(i=n-1;i>=0;i--){
			
			for(j=n-1;j>=0;j--){
				
				if(dd[i][j]>=max&&k==0&&i!=j){
					di[k]=i;
					dj[k]=j;
					max=dd[i][j];
				
				}
				
				if(dd[i][j]>=max&&k!=0&&i!=j){
					di[k]=i;
					dj[k]=j;
					max=dd[i][j];
				
				}		
			}
		}
		dd[di[k]][dj[k]]=-1;
		dd[dj[k]][di[k]]=-1;
		xin[k]=max;
		max=0;
	}

	for(i=0;i<n*(n-1)/2;i++){
		printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",sz[3*di[i]],sz[3*di[i]+1],sz[3*di[i]+2],sz[3*dj[i]],sz[3*dj[i]+1],sz[3*dj[i]+2],xin[i]);
	}
	return 0;
}

