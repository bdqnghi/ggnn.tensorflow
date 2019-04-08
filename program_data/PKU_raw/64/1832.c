int main(){
	int n,i,j,dx,dy,dz,o=0;
	scanf("%d",&n);
	int x[10],y[10],z[10];
	double ji[100];
	for(i=0;i<n;i++){
	scanf("%d%d%d",&(x[i]),&(y[i]),&(z[i]));
}struct pp{
	int xi[2],yi[2],zi[2];
	double jl;
	}pp[100],e;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
		dx=x[j]-x[i];
		dy=y[j]-y[i];
		dz=z[j]-z[i];
		pp[o].xi[0]=x[i];
		pp[o].xi[1]=x[j];
		pp[o].yi[0]=y[i];
		pp[o].yi[1]=y[j];
		pp[o].zi[0]=z[i];
		pp[o].zi[1]=z[j];
		pp[o].jl=sqrt(dx*dx+dy*dy+dz*dz);
		o++;	
		}
	}
	for(i=0;i<n*(n-1)/2;i++){
		for(j=n*(n-1)/2-1;j>=i+1;j--){
			if(pp[j].jl>pp[j-1].jl){
				e=pp[j-1];
				pp[j-1]=pp[j];
				pp[j]=e;
			}
		}
	}for(i=0;i<n*(n-1)/2;i++){
	printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",pp[i].xi[0],pp[i].yi[0],pp[i].zi[0],pp[i].xi[1],pp[i].yi[1],pp[i].zi[1],pp[i].jl);
}
	return 0;
}