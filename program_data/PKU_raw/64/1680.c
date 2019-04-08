int main()
{
	int n,j,t,a,b,r=0,x[10],y[10],z[10];
	double e,sz[45][3];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d%d%d",&x[i],&y[i],&z[i]);
	}
    for(j=0;j<n-1;j++){
		for(t=j+1;t<n;t++){
			sz[r][0]=j;
			sz[r][1]=t;
			sz[r][2]=sqrt((x[j]-x[t])*(x[j]-x[t])+(y[j]-y[t])*(y[j]-y[t])+(z[j]-z[t])*(z[j]-z[t]));
			r++;
		}
	}
	for(j=1;j<=r;j++){
		for(t=0;t<r-j;t++){
			if(sz[t][2]<sz[t+1][2]){
				e=sz[t][2];
				sz[t][2]=sz[t+1][2];
				sz[t+1][2]=e;
				e=sz[t][0];
				sz[t][0]=sz[t+1][0];
				sz[t+1][0]=e;
				e=sz[t][1];
				sz[t][1]=sz[t+1][1];
				sz[t+1][1]=e;
			}
		}
	}
	for(j=0;j<r;j++){
		int a=sz[j][0];
		int b=sz[j][1];
		printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",x[a],y[a],z[a],x[b],y[b],z[b],sz[j][2]);
	}
	return 0;
}