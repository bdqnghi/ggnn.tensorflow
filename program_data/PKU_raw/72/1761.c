int main(){
	int m,n,k,g,i,c;
	int a[20][20];
	scanf("%d%d",&m,&n);
	for(k=0;k<=m-1;k++){
		for(g=0;g<=n-1;g++){
			scanf("%d",&a[k][g]);
		}
	}
	for(i=0;i<=m-1;i++){
		for(c=0;c<=n-1;c++){
			if(i==0&&c==0){
				if(a[i][c]>=a[i+1][c]&&a[i][c]>=a[i][c+1]){
					printf("%d %d\n",i,c);
				}
			}
			if(i==0&&c!=0&&c!=n-1){
				if(a[i][c]>=a[i+1][c]&&a[i][c]>=a[i][c-1]&&a[i][c]>=a[i][c+1]){
					printf("%d %d\n",i,c);
				}
			}
			if(i==0&&c==n-1){
				if(a[i][c]>=a[i+1][c]&&a[i][c]>=a[i][c-1]){
					printf("%d %d\n",i,c);
				}
			}
			if(i!=0&&i!=m-1&&c==0){
				if(a[i][c]>=a[i+1][c]&&a[i][c]>=a[i][c+1]&&a[i][c]>=a[i-1][c]){
					printf("%d %d\n",i,c);
				}
			}
			if(i==m-1&&c==0){
				if(a[i][c]>=a[i-1][c]&&a[i][c]>=a[i][c+1]){
					printf("%d %d\n",i,c);
				}
			}
			if(i==m-1&&c!=0&&c!=n-1){
				if(a[i][c]>=a[i-1][c]&&a[i][c]>=a[i][c+1]&&a[i][c]>=a[i][c-1]){
					printf("%d %d\n",i,c);
				}
			}
			if(c==n-1&&i!=0&&i!=m-1){
				if(a[i][c]>=a[i-1][c]&&a[i][c]>=a[i+1][c]&&a[i][c]>=a[i][c-1]){
					printf("%d %d\n",i,c);
				}
			}
			if(c==n-1&&i==m-1){
				if(a[i][c]>=a[i-1][c]&&a[i][c]>=a[i][c-1]){
					printf("%d %d\n",i,c);
				}
			}
			if(c!=0&&c!=n-1&&i!=0&&i!=m-1){
				if(a[i][c]>=a[i-1][c]&&a[i][c]>=a[i+1][c]&&a[i][c]>=a[i][c-1]&&a[i][c]>=a[i][c+1]){
					printf("%d %d\n",i,c);
				}
			}
		}
	}
	return 0;
}
