int main(){
	int m,n,a[20][20],i,u;
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++){
		for(u=0;u<n;u++){
			scanf("%d",&a[i][u]);
		}
	}
	for(i=0;i<m;i++){
		for(u=0;u<n;u++){
			if(i!=0&&u!=0&&i!=m-1&&u!=n-1){
				if(a[i][u]>=a[i+1][u]&&a[i][u]>=a[i-1][u]&&a[i][u]>=a[i][u+1]&&a[i][u]>=a[i][u-1]){
					printf("%d %d\n",i,u);
				}
			}else if(i==0&&u!=0&&u!=n-1){
				if(a[i][u]>=a[i+1][u]&&a[i][u]>=a[i][u+1]&&a[i][u]>=a[i][u-1]){
					printf("%d %d\n",i,u);
				}
			}else if(i==m-1&&u!=0&&u!=n-1){
				if(a[i][u]>=a[i-1][u]&&a[i][u]>=a[i][u+1]&&a[i][u]>=a[i][u-1]){
					printf("%d %d\n",i,u);
				}
			}else if(u==0&&i!=0&&i!=m-1){
				if(a[i][u]>=a[i+1][u]&&a[i][u]>=a[i-1][u]&&a[i][u]>=a[i][u+1]){
					printf("%d %d\n",i,u);
				}
			}else if(u==n-1&&i!=0&&i!=m-1){
				if(a[i][u]>=a[i+1][u]&&a[i][u]>=a[i-1][u]&&a[i][u]>=a[i][u-1]){
					printf("%d %d\n",i,u);
				}
			}else if(i==0&&u==0){
				if(a[i][u]>=a[i+1][u]&&a[i][u]>=a[i][u+1]){
					printf("%d %d\n",i,u);
				}
			}else if(i==0&&u==n-1){
				if(a[i][u]>=a[i+1][u]&&a[i][u]>=a[i][u-1]){
					printf("%d %d\n",i,u);
				}
			}else if(u==0&&i==m-1){
				if(a[i][u]>=a[i-1][u]&&a[i][u]>=a[i][u+1]){
					printf("%d %d\n",i,u);
				}
			}else{
				if(a[i][u]>=a[i-1][u]&&a[i][u]>=a[i][u-1]){
					printf("%d %d\n",i,u);
				}
			}
		}
	}
	return 0;
}