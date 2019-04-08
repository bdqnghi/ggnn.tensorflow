int main()
{
	int n,a[10],b[10],c[10],i,j,k,m,h=0;
	double d[ROW][COL],e[100],w,f;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		if(i==0){
			scanf("%d %d %d",&a[i],&b[i],&c[i]);
		}else{
			scanf(" %d %d %d",&a[i],&b[i],&c[i]);
		}
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			w=1.0*((a[i]-a[j])*(a[i]-a[j])+(b[i]-b[j])*(b[i]-b[j])+(c[i]-c[j])*(c[i]-c[j]));
				d[i][j]=pow(w,1.0/2);
				e[h]=d[i][j];
				h++;
		}
	}
	m=n*(n-1)/2;
	for(k=1;k<=m;k++){
		for(i=0;i<m-k;i++){
			if(e[i]>e[i+1]){
				f=e[i+1];
				e[i+1]=e[i];
				e[i]=f;
			}
		}
	}
	e[m]=0;
	for(k=m-1;k>=0;k--){
		if(!(e[k]==e[k+1])){
		for(i=0;i<n;i++){
			for(j=i+1;j<n;j++){
				if(d[i][j]==e[k]){
				printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",a[i],b[i],c[i],a[j],b[j],c[j],e[k]);
				}
			}
		}
	}
	}
	return 0;
}