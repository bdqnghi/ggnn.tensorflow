int main(){
	int n,i,m,j,k,w,p;
	int sz[1000][3],num[10000][2];
	double d[1000],q;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d %d",&sz[i][0] ,&sz[i][1] ,&sz[i][2]);
	}
m=n*(n-1)/2;
k=0;
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
	d[k]=sqrt((double)((sz[i][0]-sz[j][0])*(sz[i][0]-sz[j][0])+(sz[i][1]-sz[j][1])*(sz[i][1]-sz[j][1])+(sz[i][2]-sz[j][2])*(sz[i][2]-sz[j][2])));
			num[k][0]=i;
			num[k][1]=j;
			k++;
		}
	}
	for(j=1;j<=m;j++){
		for(i=0;i<m-j;i++){
			if(d[i]<d[i+1]){
				q=d[i];d[i]=d[i+1];d[i+1]=q;
				w=num[i][0];
num[i][0]=num[i+1][0];
num[i+1][0]=w;
				p=num[i][1];
num[i][1]=num[i+1][1];
num[i+1][1]=p;
			}
		}
	}
	for(i=0;i<m;i++){
	printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",sz[num[i][0]][0],sz[num[i][0]][1],sz[num[i][0]][2],sz[num[i][1]][0],sz[num[i][1]][1],sz[num[i][1]][2],d[i]);
	}
	return 0;
}
