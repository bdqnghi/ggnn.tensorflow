int main(){
	int a[25][25];
	int m,n,i=0,t=0;
	int x=0,y=0;
	scanf("%d %d",&m,&n);
	for(i=0;i<(n+2);i++){
		a[0][i]=a[m+1][i]=0;
	}
	for(i=0;i<(m+2);i++){
		a[i][0]=a[i][n+1]=0;
	}
	for(i=1;i<=m;i++){
		for(t=1;t<=n;t++){
			scanf("%d",&a[i][t]);
		}
		
	}
	for(i=1;i<=m;i++){
		for(t=1;t<=n;t++){
			if(a[i][t]>=a[i-1][t]&&a[i][t]>=a[i+1][t]&&a[i][t]>=a[i][t-1]&&a[i][t]>=a[i][t+1]){
				x=i-1;
				y=t-1;
				printf("%d %d\n",x,y);	
			}
		}
	}
	return 0;

}