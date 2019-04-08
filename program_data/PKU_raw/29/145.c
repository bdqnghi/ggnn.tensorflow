
int main(){
	int n[100],i,m,j;
	double x[100],y[100];
	double a[100];
	scanf("%d",&m);
	for(i=0;i<m;i++){
		scanf("%d",&n[i]);
	}
	for(i=0;i<m;i++){
		x[0]=2;y[0]=1;
		x[1]=3;y[1]=2;
		a[i]=x[0]/y[0];
		for(j=1;j<n[i];j++){
			if(j>1){
				x[j]=x[j-1]+x[j-2];
				y[j]=y[j-1]+y[j-2];
			}
			a[i]=a[i]+x[j]/y[j];
		}
	}
	for(i=0;i<m;i++){
		printf("%.3lf\n",a[i]);
	}
	return 0;
}