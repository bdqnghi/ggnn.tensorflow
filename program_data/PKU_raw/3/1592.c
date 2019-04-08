int main(){
int n,k,i,j,g[N];
scanf("%d%d",&n,&k);
for(i=0;i<n;i++){
	scanf("%d",&g[i]);}
for(i=0;i<n-1;i++){
	for(j=i+1;j<n;j++){
		if(g[i]+g[j]==k){
			printf("yes");
			break;}
		else if(i==n-2){
			printf("no");
		}
	}
	if(g[i]+g[j]==k){
			break;}
		else if(i==n-2){
			break;
		}
}
	return 0;
}