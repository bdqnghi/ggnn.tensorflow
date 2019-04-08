int main(){
	int k[10][3],t;
	int n,i,j,a,b,g[100];
	double h[100],e;
	scanf("%d",&n);
	for(i=0;i<100;i++){
		g[i]=i;
	}
	for(i=0;i<100;i++){
		h[i]=-1;
	}
	for(i=0;i<n;i++){
		for(j=0;j<3;j++){
			scanf("%d",&k[i][j]);
		}
	}
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			h[i*n+j]=1.0*sqrt((k[i][0]-k[j][0])*(k[i][0]-k[j][0])+(k[i][1]-k[j][1])*(k[i][1]-k[j][1])+(k[i][2]-k[j][2])*(k[i][2]-k[j][2]));
		}
	}

	for(i=0;i<100;i++){
		for(j=99;j>i;j--){
			if(h[j-1]<h[j]){
				t=g[j];
				g[j]=g[j-1];
				g[j-1]=t;
				e=h[j];
				h[j]=h[j-1];
				h[j-1]=e;
			}
		}
	}
	for(i=0;i<100;i++){
		if(h[i]!=-1){
		a=g[i]/n;
		b=g[i]%n;
		printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",k[a][0],k[a][1],k[a][2],k[b][0],k[b][1],k[b][2],h[i]);
		}
	}
		return 0;
		}