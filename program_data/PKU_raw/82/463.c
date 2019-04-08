int main() {
	int  a[101],b[101],c[101],n,i,e=1,f=0,g,h;
	scanf("%d",&n);
	
	for (i=1;i<=n;i++){
		scanf("%d %d",&a[i],&b[i]);
	}
	for(i=1;i<=101;i++){
		c[i]=0;
	}
	for (i=1;i<=n;i++){
		if(a[i]>=90&&a[i]<=140&&b[i]>=60&&b[i]<=90) {
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

