int main(){
	int k[4]={0},i,j=0,n,a[100];
	double m;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		if(a[i]>=1&&a[i]<=18){
			k[0]++;
		}
		if(a[i]>=19&&a[i]<=35){
			k[1]++;
		}

		if(a[i]>=36&&a[i]<=60){
			k[2]++;
		}
		if(a[i]>60){
			k[3]++;
		}
	}
	m=100*(1.0*k[0]/n);
	printf("1-18: %.2lf%%\n",m);
	m=100*(1.0*k[1]/n);
	printf("19-35: %.2lf%%\n",m);
	m=100*(1.0*k[2]/n);
	printf("36-60: %.2lf%%\n",m);
	m=100*(1.0*k[3]/n);
	printf("60??: %.2lf%%\n",m);
	return 0;
}


