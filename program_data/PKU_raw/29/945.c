int main(){
	int a[10000],b[10000],m,n[10000],i,max=0,e;
	double c[10000];
	scanf("%d",&m);
	for(i=0;i<m;i++){
		scanf("%d",&n[i]);
		if(max<n[i])  max=n[i];
	}
    a[0]=2;
	a[1]=3;
	b[0]=1;
	b[1]=2;
	c[0]=2;
	for(i=2;i<max;i++){
		b[i]=b[i-1]+b[i-2];
	    a[i]=a[i-1]+a[i-2];
	}
    for(i=1;i<max;i++){
		c[i]=c[i-1]+1.0*a[i]/b[i];
	}
	for(i=0;i<m;i++){
        e=n[i]-1;
		printf("%.3lf\n",c[e]);
	}
	return 0;
}