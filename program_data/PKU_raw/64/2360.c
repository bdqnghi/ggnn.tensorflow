int main(){
int n;
scanf("%d",&n);
int i,j=0,x[100],y[100],z[100],nlx[100],nly[100],nlz[100],nfx[100],nfy[100],nfz[100];
for(i=0;i<n;i++){
scanf("%d %d %d",&x[i],&y[i],&z[i]);
}
double d,jl[45];
for(i=0;i<n-1;i++){
	for(int k=i+1;k<n;k++){
		d=1.0*(x[i]-x[k])*(x[i]-x[k])+1.0*(y[i]-y[k])*(y[i]-y[k])+1.0*(z[i]-z[k])*(z[i]-z[k]);
			jl[j]=sqrt(d);
			nfx[j]=x[i];
                        nfy[j]=y[i];
                        nfz[j]=z[i];
                        nlx[j]=x[k];
                        nly[j]=y[k];
                        nlz[j]=z[k];
			j++;
		}
		}
int result;
result=n*(n-1)/2;
for(int k=1;k<=result;k++){
double e;
for(j=0;j<result-k;j++){
	if(jl[j]<jl[j+1]){
	e=jl[j+1];
	jl[j+1]=jl[j];
	jl[j]=e;

	e=nfx[j+1];
	nfx[j+1]=nfx[j];
	nfx[j]=e;

	e=nfy[j+1];
	nfy[j+1]=nfy[j];
	nfy[j]=e;

	e=nfz[j+1];
	nfz[j+1]=nfz[j];
	nfz[j]=e;

	e=nlx[j+1];
	nlx[j+1]=nlx[j];
	nlx[j]=e;

	e=nly[j+1];
	nly[j+1]=nly[j];
	nly[j]=e;

	e=nlz[j+1];
	nlz[j+1]=nlz[j];
	nlz[j]=e;
	}
}
}
for(j=0;j<result;j++){
printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",nfx[j],nfy[j],nfz[j],nlx[j],nly[j],nlz[j],jl[j]);
}
return 0;
}
