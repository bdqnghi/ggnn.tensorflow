int main(){
	int x[10],y[10],z[10],weizhi[200],t,n,i,j,k,a,b;
	double juli[200],m,pingfanghe[200];
	scanf("%d",&n);
	k=0;

	for(i=0;i<n;i++) 
		scanf("%d%d%d",&x[i],&y[i],&z[i]);

	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			pingfanghe[k]=(x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j])+(z[i]-z[j])*(z[i]-z[j]);
            juli[k]=sqrt(pingfanghe[k]);
            weizhi[k]=i*10+j;
			k++;
		}
	}
	k--;
    for(i=k;i>0;i--){
		for(j=0;j<i;j++){
            if(juli[j]<juli[j+1]){
				m=juli[j];
				juli[j]=juli[j+1];
				juli[j+1]=m;
				t=weizhi[j];
				weizhi[j]=weizhi[j+1];
                weizhi[j+1]=t;
			}
		}
	}
	for(i=0;i<=k;i++){
        a=weizhi[i]/10;
		b=weizhi[i]%10;
		printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",x[a],y[a],z[a],x[b],y[b],z[b],juli[i]);
	}
    return 0;
}
			
