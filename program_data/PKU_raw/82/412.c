int main(){
	int n,i,m,k;
	int gy[100];
	int dy[100];
	k=0;
	m=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d",&gy[i],&dy[i]);
		if(gy[i]>=90&&gy[i]<=140&&dy[i]>=60&&dy[i]<=90){
			k++;if(k>m){
				m=k;
			}}else{
				m=m;
				k=0;
		}
	}
	printf("%d",m);
	return 0;
}