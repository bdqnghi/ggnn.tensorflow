int main()
{
	int n,i,k,l,m=0,p=0;
	double sz[40],e;
	double a[40];
	double b[40];
	char zfc[40][10];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",zfc[i]);
		scanf("%lf",&sz[i]);
		if(zfc[i][0]=='m'){
			a[m]=sz[i];
			m++;
		}
		else if(zfc[i][0]=='f'){ 
			b[p]=sz[i];
			p++;
		}
	}
		for(k=1;k<=m;k++){
			for(l=0;l<m-k;l++){
				if(a[l]>a[l+1]){
					e=a[l+1];
					a[l+1]=a[l];
					a[l]=e;
				}
			}
		}
    	for(k=1;k<=p;k++){
			for(l=0;l<p-k;l++){
				if(b[l]<b[l+1]){
					e=b[l+1];
					b[l+1]=b[l];
					b[l]=e;
				}
			}
    	}
	for(l=0;l<m;l++){
		printf("%.2lf ",a[l]);
	}
	printf("%.2lf",b[0]);
	for(l=1;l<p;l++){
		printf(" %.2lf",b[l]);
	}
	return 0;
}