int main(){
    int n,m,i,t,k;
	int a[300],b[300],c[100];
    k=0;
    while (1){
	scanf("%d%d",&n,&m);
    t=m;
    if ((m==0)&&(n==0)) {
        break;
    }
    else{
   	for (i=0;i<n;i++){
		a[i]=i+1;
	}
		while (n>1){
		while (m>n){
			m=m-n;
		}
	    for (i=m;i<n;i++){
		 b[i-m]=a[i];
		}
	    for (i=0;i<m-1;i++){
		 b[n-m+i]=a[i];
		}
		for (i=m;i<n;i++){
		 a[i-m]=b[i-m];
		}
		for (i=0;i<m-1;i++){
		 a[n-m+i]=b[n-m+i];
		}
    	n=n-1;
        m=t;
		}
        c[k]=a[0];k=k+1;
    }
	}
    for (i=0;i<k;i++)
	printf("%d\n",c[i]);
return 0;
}

