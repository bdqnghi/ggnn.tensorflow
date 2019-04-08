int main(){
	int n,i,sum1=0;
	float sum=0;
	scanf("%d",&n);
	int a[n],b[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		sum1+=a[i];
	}
	for(i=0;i<n;i++){
		scanf("%d",&b[i]);
		if(b[i]<60)
			sum+=0;
		if(b[i]>=60&&b[i]<=63)
			sum+=a[i]*1.0;
		if(b[i]>=64&&b[i]<=67)
			sum+=a[i]*1.5;
		if(b[i]>=68&&b[i]<=71)
			sum+=a[i]*2.0;
		if(b[i]>=72&&b[i]<=74)
			sum+=a[i]*2.3;
		if(b[i]>=75&&b[i]<=77)
			sum+=a[i]*2.7;
		if(b[i]>=78&&b[i]<=81)
			sum+=a[i]*3.0;
		if(b[i]>=82&&b[i]<=84)
			sum+=a[i]*3.3;
		if(b[i]>=85&&b[i]<=89)
			sum+=a[i]*3.7;
		if(b[i]>=90&&b[i]<=100)
			sum+=a[i]*4.0;
	}
	printf("%.2f",sum/sum1);
	return 0;
}
