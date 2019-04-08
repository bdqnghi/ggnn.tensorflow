int main(){
	int a[10],b[10],c[10],e,f,g,l,m=0,o[50],p[50],q[50],r[50],s[50],t[50],u,v,w,x,y,z;
	double d[50],n;
	char h='(',i=')',j='-',k='=';
	scanf("%d",&e);
	for(f=0;f<e;f++){
		scanf("%d%d%d",&a[f],&b[f],&c[f]);
	}
	for(f=0;f<(e-1);f++){
		for(g=f+1;g<e;g++){
			l=(a[f]-a[g])*(a[f]-a[g])+(b[f]-b[g])*(b[f]-b[g])+(c[f]-c[g])*(c[f]-c[g]);
			d[m]=sqrt(l);
			o[m]=a[f];
			p[m]=b[f];
			q[m]=c[f];
			r[m]=a[g];
			s[m]=b[g];
			t[m]=c[g];
			m++;
		}
	}
	for(f=0;f<m;f++){
		for(g=f+1;g<m;g++){
			if(d[f]<d[g]){
				n=d[g];
				u=o[g];
				v=p[g];
				w=q[g];
				x=r[g];
				y=s[g];
				z=t[g];
				for(e=g;e>f;e--){
					d[e]=d[e-1];
					o[e]=o[e-1];
					p[e]=p[e-1];
					q[e]=q[e-1];
					r[e]=r[e-1];
					s[e]=s[e-1];
					t[e]=t[e-1];
				}
				d[f]=n;
				o[f]=u;
				p[f]=v;
				q[f]=w;
				r[f]=x;
				s[f]=y;
				t[f]=z;
			}
		}
	}
	for(f=0;f<m;f++){
		printf("%c%d,%d,%d%c%c%c%d,%d,%d%c%c%.2lf\n",h,o[f],p[f],q[f],i,j,h,r[f],s[f],t[f],i,k,d[f]);
	}
	return 0;
}
