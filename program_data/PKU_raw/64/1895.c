double a[10000],g[10000];
void mppx(double a[],int n);
int main()
{
	int n,i,j,k,l,v,w;
	double d,e,f;
	struct b{
		double x,y,z;
	}c[1000];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%lf%lf%lf",&(c[i].x),&(c[i].y),&(c[i].z));
	}
	j=0;
	k=1;
	for(i=0;i<(n-1)*n/2;i++){
		d=(c[j].x-c[k].x)*(c[j].x-c[k].x);
	    e=(c[j].y-c[k].y)*(c[j].y-c[k].y);
		f=(c[j].z-c[k].z)*(c[j].z-c[k].z);
		if(e<0){
			e=-e;
		}
		if(f<0){
			f=-f;
		}
		if(d<0){
			d=-d;
		}
		a[i]=d+e+f;
		a[i]=sqrt(a[i]);
		k++;
		if(k==n){
			j++;
			k=j+1;
		}
	}
	mppx(a,n*(n-1)/2);
	l=0;
	v=n-1;
	for(i=0;i<(n-1)*n/2;i++){
		for(j=0;j<(n-1)*n/2;j++){
			if(a[j]==g[i]){
				for(w=j;w>=v;j=j){
					if(w>=v){
						l++;
						w=w-v+l;
					}
				}
				printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",(int)(c[l].x),(int)(c[l].y),(int)(c[l].z),(int)(c[w+1].x),(int)(c[w+1].y),(int)(c[w+1].z),g[i]);
				a[j]=0;
				l=0;
				break;
			}
		}
	}
	return 0;
}
void mppx(double a[],int n){
	int i,j;
	double t;
	for(i=0;i<n;i++){
		g[i]=a[i];
	}
	for(i=0;i<n-1;i++){
		for(j=n-2;j>=0;j--){
			if(g[j]<g[j+1]){
				t=g[j];
				g[j]=g[j+1];
				g[j+1]=t;
			}
		}
	}
}