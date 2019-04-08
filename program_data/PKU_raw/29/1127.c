int main(){
	int m,i,k;
	int n[100];
	double a[100],b[100];
	double c=0,s=0;
	scanf("%d",&m);
	for(i=0;i<m;i++){
		scanf("%d",&n[i]);
	}
	a[0]=2;
	a[1]=3;
	for(i=0;i<m;i++){
		for(k=2;k<n[i];k++){
            a[k]=a[k-1]+a[k-2];
		}
	}
    b[0]=1;
	b[1]=2;
	for(i=0;i<m;i++){
		for(k=2;k<n[i];k++){
            b[k]=b[k-1]+b[k-2];
		}
	}
	for(i=0;i<m;i++){
		s=0;
		c=0;
		for(k=0;k<n[i];k++){
            c=a[k]/b[k];
			s=s+c;
		}
		printf("%.3lf\n",s);
	}
    return 0;
}

    