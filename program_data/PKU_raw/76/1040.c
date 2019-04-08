int main(){
	int a[50000],b[50000],n,m,i,t,j;
	scanf("%d",&n);
	for(i=0;i<n;i++) 
		scanf("%d %d",&a[i],&b[i]);
    m=0;
		for(i=n-1;i>0;i--){
			for(j=0;j<i;j++){
			if(a[j]>a[j+1]){
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
				t=b[j];
                b[j]=b[j+1];
				b[j+1]=t;
			}
		}
		}
	for(i=0;i<n-1;i++){
        if(b[i]>=a[i+1]){
			if(b[i]>b[i+1])
				b[i+1]=b[i];
				if(i+2==n){
				m=1;
				}
		}
		if(b[i]<a[i+1]) break;
	}
		if(m!=1) printf("no");
		else printf("%d %d",a[0],b[i]);
        return 0;
}
			