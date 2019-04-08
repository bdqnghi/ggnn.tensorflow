void main(){
	int n,i,xf[10],a[10];
	float GPA=0,b,sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&xf[i]);
		sum+=xf[i];
	}
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++){
		if(a[i]>=90) b=4.0;
		if(a[i]<=89 && a[i]>=85) b=3.7;
		if(a[i]<=84 && a[i]>=82) b=3.3;
		if(a[i]<=81 && a[i]>=78) b=3.0;
		if(a[i]<=77 && a[i]>=75) b=2.7;
		if(a[i]<=74 && a[i]>=72) b=2.3;
		if(a[i]<=71 && a[i]>=68) b=2.0;
		if(a[i]<=67 && a[i]>=64) b=1.5;
		if(a[i]<=63 && a[i]>=60) b=1.0;
		if(a[i]<60) b=0.0;
		GPA+=b*xf[i];
	}
	printf("%.2f",GPA/sum);
}


