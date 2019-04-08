int main(){
	int n,i,j,m[100];
	double a[100],b[100];
	double c;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&m[i]);
	}
	for(j=0;j<n;j++){
	a[1]=2,a[2]=3;
	b[1]=1,b[2]=2;
	if(m[j]==1){
		c=2;
		printf("%.3lf\n",c);
	}
	if(m[j]==2){
		c=3.5;
		printf("%.3lf\n",c);
	}
	if(m[j]>2){
		c=3.5;
	     for(i=3;i<=m[j];i++){
		     a[i]=a[i-1]+a[i-2];
             b[i]=b[i-1]+b[i-2];
	         c+=a[i]/b[i];
			}
		 printf("%.3lf\n",c);
	}
	}
	return 0;
}