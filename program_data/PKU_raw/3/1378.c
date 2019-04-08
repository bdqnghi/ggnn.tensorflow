int main(){
	int n,k,j,i,a[1000],e,b[1000][1000];
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	
	for(i=0;i<=n-1;i++){
	for(j=0;j<=n-1;j++){
		b[i][j]=a[i]+a[j];
		if(b[i][j]==k){
			printf("yes");
			break;
	}
		if(i==n-1&&j==n-1){
printf("no");
		}
	}
if(b[i][j]==k){
			
			break;
}
	}

return 0;
}