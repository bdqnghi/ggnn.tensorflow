


int main(){
	int time;
	int m,n;
	int i,j;
	int x,y;
	int res;
	int r;
	int arr[10000];
	scanf("%d",&time);
	for(i=0;i<time;i++){
		res = 0;
		scanf("%d %d",&m,&n);
//		printf("%d %d",m,n);
		for(j=0;j<m*n;j++){
			scanf("%d",&r);
			//printf("%d\n",r);
			arr[j]=r;
		}
		for(x=0;x<m;x++)
			for(y=0;y<n;y++){
				if((x==0)||(x==(m-1)))
					res+=arr[x*n+y];
				if((y==0)&&(x!=0)&&(x!=(m-1)))
					res+=arr[x*n+y];
				if((y==(n-1))&&(x!=0)&&(x!=(m-1)))
					res+=arr[x*n+y];
			}
		printf("%d\n",res);
	}
	return 0;
}