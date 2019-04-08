int main(){
	int n,year[200],month1[200],month2[200],i=0,e=0,j=0,k=0;
	double a[50],b=0,s=0,sum=0,average=0;
	scanf("%d",&k);
	while(i<k){
		scanf("%d",&n);
		for(j=0;j<n;j++){
			scanf("%lf",&a[j]);
			sum+=a[j];
		}
		average=sum/n;
		for(j=0;j<n;j++){
			b+=(a[j]-average)*(a[j]-average);
		}
		s=sqrt(b/n);
		printf("%.5lf\n",s);
		sum=0;
		average=0;
		s=0;
		b=0;
		i++;
	}
	
	
	return 0;
}
