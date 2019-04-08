int main(){
	int n,l=0,x[101],y[101],z[101],a[101],b[101],i;
    double m[101];
	scanf("%d\n",&n);
		for(i=0;i<n;i++){
		scanf("%d %d %d",&x[i],&y[i],&z[i]);
		}
		for(int k=0;k<n-1;k++){
			for(i=k+1;i<n;i++){
		m[l]=sqrt(1.0*(x[k]-x[i])*(x[k]-x[i])+1.0*(y[k]-y[i])*(y[k]-y[i])+1.0*(z[k]-z[i])*(z[k]-z[i]));
		
		a[l]=k;
		b[l]=i;
		l++;	}
		}
        for(int k=1;k<=l;k++){
		   double e;
		   for(i=0;i<l-k;i++){
			   if(m[i]<m[i+1]){
			   e=m[i+1];
			   m[i+1]=m[i];
			   m[i]=e;

			   e=a[i+1];
			   a[i+1]=a[i];
			   a[i]=e;

			   e=b[i+1];
			   b[i+1]=b[i];
			   b[i]=e;
			   }
		   }
		}
		for(i=0;i<l;i++){
		printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",x[a[i]],y[a[i]],z[a[i]],x[b[i]],y[b[i]],z[b[i]],m[i]);}
        return 0;

} 