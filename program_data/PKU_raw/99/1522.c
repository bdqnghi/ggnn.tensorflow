int main(){
	int n,i,a[100];
	double o=0,tw=0,th=0,f=0,z=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		if(a[i]<18||a[i]==18)o++;
		if(a[i]>18&&a[i]<36)tw++;
		if(a[i]>35&&a[i]<61)th++;
		if(a[i]>60)f++;
		z++;
	}
	o=o/z*100;tw=tw/z*100;th=th/z*100;f=f/z*100;
	printf("1-18: %.2lf",o);
	printf("%%\n");
	printf("19-35: %.2lf",tw);
	printf("%%\n");
	printf("36-60: %.2lf%",th);
	printf("%%\n");
	printf("60??: %.2lf",f);
	printf("%%\n");

	return 0;
}


