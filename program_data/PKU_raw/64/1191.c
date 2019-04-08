int main(){
	int i,a,b,c=1,p,q,n,M[46],N[46],e;
	double x[11],y[11],z[11],l[46],d;
	scanf("%d ",&n);
	for(i=1;i<=n;i++){
		scanf("%lf %lf %lf",&x[i],&y[i],&z[i]);
	}

	for(a=1;a<n;a++){
		for(b=a+1;b<=n;b++){
			l[c]=sqrt((x[a]-x[b])*(x[a]-x[b])+(y[a]-y[b])*(y[a]-y[b])+(z[a]-z[b])*(z[a]-z[b]));
			M[c]=a;
			N[c]=b;
			c++;
		}
	}
	for(p=1;p<(n*(n-1))/2;p++){
		for(q=p+1;q<=(n*(n-1));q++){
			if(l[p]<l[q]){
				for(i=q;i>p;i--){
					d=l[i];
					l[i]=l[i-1];
					l[i-1]=d;
					e=M[i];
					M[i]=M[i-1];
					M[i-1]=e;
					e=N[i];
					N[i]=N[i-1];
					N[i-1]=e;
				}
			}
		}
	}

	for(i=1;i<=n*(n-1)/2;i++){
		printf("(%.0lf,%.0lf,%.0lf)-(%.0lf,%.0lf,%.0lf)=%.2lf\n",x[M[i]],y[M[i]],z[M[i]],x[N[i]],y[N[i]],z[N[i]],l[i]);
	}

	return 0;
}
