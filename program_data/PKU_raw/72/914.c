int main(){
	int m,n,a[20][20],i,j;
	int b,c,d,e;
	scanf("%d %d",&m,&n);
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			if(i==0&&i!=m-1)
				b=0;
			else
				b=a[i-1][j]-a[i][j];
			if(j==0&&j!=n-1)
				c=0;
			else
				c=a[i][j-1]-a[i][j];
			if(i==m-1)
				d=0;
			else
				d=a[i+1][j]-a[i][j];
			if(j==n-1)
				e=0;
			else
				e=a[i][j+1]-a[i][j];
			if(b<=0&&c<=0&&d<=0&&e<=0)
				printf("%d %d\n",i,j);
		}
	}
	return 0;
}
