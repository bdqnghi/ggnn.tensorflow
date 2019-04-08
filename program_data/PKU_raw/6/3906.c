int main(){
	int k,m,n;
	int sz[100][100];
	int i,r,sum1,sum2,sum;
	scanf("%d",&k);
	for(int j=1;j<=k;j++){
		scanf("%d%d",&m,&n);
	  for(i=0;i<m;i++){
		for(r=0;r<n;r++){
			scanf("%d",&sz[i][r]);
		}
	  }
	  sum1=0;
	  for(int q=0;q<n;q++){
		  sum1+=sz[0][q]+sz[m-1][q];
	  }
	  sum2=0;
	  for(int w=0;w<m;w++){
		  sum2+=sz[w][n-1]+sz[w][0];
	}
	sum=sum1+sum2-sz[0][0]-sz[0][n-1]-sz[m-1][0]-sz[m-1][n-1];
	printf("%d\n",sum);
}
return 0;
}
	  
	  


