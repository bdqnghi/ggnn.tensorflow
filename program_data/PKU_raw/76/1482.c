int main(){
	int n,i,k,m,y;
	int a[50005],b[50005],c[50005],d[50005];
	double x;
	int f,g=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d%d",&a[i],&b[i]);
		c[i]=a[i];
		d[i]=b[i];
	}
	for(i=1;i<n;i++){
		for(k=1;k<=n-i;k++){
			if(c[k+1]<c[k]){
				m=c[k];
				c[k]=c[k+1];
				c[k+1]=m;
			}
			if(d[k+1]<d[k]){
				y=d[k];
				d[k]=d[k+1];
				d[k+1]=y;
			}
		}
	}
	for(x=c[1];x<=d[n];x+=0.5){
		f=0;
		for(i=1;i<=n;i++){		
			if(x>=a[i]&&x<=b[i]){
				f++;
			}
		}
		if(f!=0){
			g++;
		}
	}
	if(g==(d[n]-c[1])*2+1){
		printf("%d %d",c[1],d[n]);
	}else{
		printf("no");
	}	
	return 0;
}