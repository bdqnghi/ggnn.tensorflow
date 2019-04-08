int main(){
	int a[1000];
	int s1=0,s2=0,s3=0,s4=0;
	int n,i;
	scanf("%d",&n);
	for (i=0;i<n;i++){
		scanf("%d",&a[i]);
		if (a[i]<=18){
			s1++;
		}
		if (a[i]>18 && a[i]<=35){
			s2++;
		}
		if (a[i]>35 && a[i]<61){
			s3++;
		}
		if (a[i]>60){
			s4++;
		}
	}
    double x,b,c,d;
	x=s1*1.0*100/n;
	b=s2*1.0*100/n;
	c=s3*1.0*100/n;
	d=s4*1.0*100/n;
	printf("1-18: %.2lf%%\n",x);
	printf("19-35: %.2lf%%\n",b);
	printf("36-60: %.2lf%%\n",c);
	printf("60??: %.2lf%%\n",d);
	return 0;
}