int main() {
	int x[10];
	int y[10];
	int z[10];
	int a,b,c,n,i,r,j,p=0,k;
	double jl[45];
	double d;
	scanf("%d",&n);
	k=n*(n-1)/2;
	for(i=0;i<n;i++){
		scanf("%d",&x[i]);
		scanf("%d",&y[i]);
		scanf("%d",&z[i]);
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			a=x[i]-x[j];
			b=y[i]-y[j];
			c=z[i]-z[j];
			jl[p]=sqrt(1.0*a*a+b*b+c*c);
			p++;
		}
	}
	double e;
	for(i=1;i<=k;i++){
		for(j=0;j<k-i;j++){
			if(jl[j]>jl[j+1]){
				e=jl[j+1];
				jl[j+1]=jl[j];
				jl[j]=e;
			}
		}
	}
	double bcjl[45];
	bcjl[0]=jl[0];
	int w;
	w=1;
	for(i=1;i<k;i++){
		if(jl[i]==jl[i-1]){
			continue;
		}else{
			bcjl[w]=jl[i];
			w++;
		}
	}
	for(r=w-1;r>=0;r--){
		for(i=0;i<n;i++){
			for(j=i+1;j<n;j++){
				a=x[i]-x[j];
				b=y[i]-y[j];
				c=z[i]-z[j];
				d=sqrt(1.0*a*a+b*b+c*c);
				if(d==bcjl[r]){
					printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",x[i],y[i],z[i],x[j],y[j],z[j],d);
				}
			}
		}
	}
	return 0;
}
