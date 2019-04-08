
int dp[1010][1010];
int a[1010]={0},b[1010]={0};
int cmp1(const void *a,const void *b){
	return *(int *)a- *(int *)b;
}
int cmp2(const void *a,const void *b){
	return *(int *)b- *(int *)a;
}
int max(int a,int b){
	return a>b?a:b;
}
int mon(int i,int j){
	if(a[i]>b[j])	return 200;
	if(a[i]==b[j])	return 0;
	if(a[i]<b[j])	return -200;
	return 0;
}
int main(){
	int n;
	cin>>n;
	int i,j;
	while(n){
		memset(a,0,sizeof(int));
		memset(b,0,sizeof(int));
		for(i=0;i<n;i++){
			cin>>a[i];
		}
		for(i=0;i<n;i++){
			cin>>b[i];
		}
		qsort(a,n,sizeof(int),cmp1);//????
		qsort(b,n,sizeof(int),cmp2);//????
		memset(dp,0,sizeof(int));
		for(i=1;i<=n;i++){
			dp[i][0]=dp[i-1][0]+mon(n-i,i-1);
			for(j=1;j<i;j++){
				dp[i][j]=max(dp[i-1][j-1]+mon(j-1,i-1),dp[i-1][j]+mon(n-(i-j),i-1));
			}
			dp[i][i]=dp[i-1][i-1]+mon(i-1,i-1);
		}
		int Max=-99999999;
		for(i=0;i<n;i++){
			if(dp[n][i]>Max)Max=dp[n][i];
		}
		cout<<Max<<endl;


		cin>>n;
	}
	return 0;
}