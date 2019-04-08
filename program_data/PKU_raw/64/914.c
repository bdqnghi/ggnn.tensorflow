int main(){
	int n,a[10],b[10],c[10],i;
	double d[10][10],e[45];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d%d",&a[i],&b[i],&c[i]);
	}
	int k,t=0;
	for(i=0;i<n;i++){
		for(k=i+1;k<n;k++){
			d[i][k]=sqrt((a[i]-a[k])*(a[i]-a[k])+(b[i]-b[k])*(b[i]-b[k])+(c[i]-c[k])*(c[i]-c[k]));
			e[t]=d[i][k];
			t++;
		}
	}
	for(t=0;t<n*(n-1)/2-1;t++){
		for(i=n*(n-1)/2-1;i>t;i--){
			if(e[i]>e[i-1]){
				double m;
				m=e[i];
				e[i]=e[i-1];
				e[i-1]=m;
			}
		}
	}
	for(t=0;t<n*(n-1)/2;t++){
		for(i=0;i<n;i++){
			for(k=i+1;k<n;k++){
				if(d[i][k]==e[t]){
					printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",a[i],b[i],c[i],a[k],b[k],c[k],e[t]);
					d[i][k]=0;
					k=n;
					i=n;
				}
			}
		}
	}
	return 0;
}