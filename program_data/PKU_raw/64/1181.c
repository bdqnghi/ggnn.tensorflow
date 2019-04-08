int main()
{
	int n,m=0,p,q,d;
	double c,e;
	scanf("%d",&n);
	int sz[30];
	int a[45],b[45];
	for(int i=0;i<3*n;i++){
		scanf("%d",&sz[i]);
	}
	double jl[45];
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			c=pow(1.0*(sz[3*j]-sz[3*i]),2.0)+pow(1.0*(sz[3*j+1]-sz[3*i+1]),2.0)+pow(1.0*(sz[3*j+2]-sz[3*i+2]),2.0);
			jl[m]=sqrt(c);
			a[m]=i;
			b[m]=j;
			m++;
		}
	}
	for(p=1;p<n*(n-1)/2;p++){
		for(q=0;q<n*(n-1)/2-p;q++){
			if(jl[q]<jl[q+1]){
				e=jl[q];
				jl[q]=jl[q+1];
				jl[q+1]=e;
				d=a[q];
				a[q]=a[q+1];
				a[q+1]=d;
                d=b[q];
				b[q]=b[q+1];
				b[q+1]=d;
			}
		}
	}
	for(p=0;p<n*(n-1)/2;p++){
		printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",sz[3*a[p]],sz[3*a[p]+1],sz[3*a[p]+2],sz[3*b[p]],sz[3*b[p]+1],sz[3*b[p]+2],jl[p]);
	}
	return 0;
}