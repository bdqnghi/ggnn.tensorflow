int main() {
	int  a[101],b[101],c[101],n,d,e,f,g,h;
	scanf("%d",&n);
	f=0;
	e=1;
	for (d=1;d<=n;d++){
		scanf("%d %d",&a[d],&b[d]);
	}
	for(d=1;d<=101;d++){
		c[d]=0;
	}
	for (d=1;d<=n;d++){
		if(a[d]>=90&&a[d]<=140&&b[d]>=60&&b[d]<=90) {
			f++;
		    c[e]=f;
		}
		else {  
				e++;
				f=0;
		
		}
	}
		for(g=e-1;g>=1;g--){
			if (c[g]<c[g+1]){
				h=c[g+1];
				c[g]=h;
			}
		}
		printf("%d\n",c[1]);
		return 0;

}