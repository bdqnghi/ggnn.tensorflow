int main(){
  int k,m,n;
  scanf("%d",&k);
  int a[100][100];
  for (int r=0;r<k;r++){
	    scanf("%d %d",&m,&n);
    for (int i=0;i<m;i++){
	  for (int j=0;j<n;j++){
	    scanf("%d",&a[i][j]);
	  }
	}
	int s=0;
	for(int t=0;t<n;t++){
	   s+=a[0][t]+a[m-1][t];
	}
	for(int u=1;u<m-1;u++){
	   s+=a[u][0]+a[u][n-1];
	}
	printf("%d\n",s);
  }
  return 0;
}