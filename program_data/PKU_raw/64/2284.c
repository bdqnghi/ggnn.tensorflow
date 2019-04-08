int main()
{
	int n,i,m,x[100],y[100],z[100],r[100],t[100],a,b,k,c,d,p;
	double q[100],e;
	m=0;
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%d%d%d", &x[i], &y[i], &z[i]);}
	for(k=0;k<n;k++){
		for(i=k+1;i<n;i++){
			q[m]=sqrt(1.0*(x[i]-x[k])*(x[i]-x[k])+1.0*(y[i]-y[k])*(y[i]-y[k])+1.0*(z[i]-z[k])*(z[i]-z[k]));
			r[m]=k;
			t[m]=i;
			m++;}	
	}
	p=n*(n-1)/2;
	for(a=1;a<p+1;a++){
		for(m=0;m<p-a;m++){
			if(q[m]<q[m+1]){
				e=q[m+1];
				q[m+1]=q[m];
				q[m]=e;
				b=r[m+1];
				r[m+1]=r[m];
				r[m]=b;
				b=t[m+1];
				t[m+1]=t[m];
				t[m]=b;}
		}
	}
	c=0;
	d=0;
	for(m=0;m<p;m++){
		c=r[m];
		d=t[m];
		printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", x[c], y[c], z[c], x[d], y[d], z[d], q[m]);}
	return 0;
}