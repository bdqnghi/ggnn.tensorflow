int main () {
	int n,i,j;
	double p;
	int a[100][2];
	double s[100];
	scanf ("%d",&n);
	for (i=0;i<n;i++){
		for (j=0;j<2;j++){
			scanf ("%d",&a[i][j]);
		}
	}
    for (i=0;i<n;i++){
		s[i]=a[i][1]*1.0/a[i][0];
		p=s[0];
	}
	for (i=1;i<n;i++){
		if (s[i]-p>0.05){
			printf ("better\n");
		}if (p-s[i]>0.05){
			printf ("worse\n");
		}if (s[i]-p<=0.05&&p-s[i]<=0.05){
			printf ("same\n");
		}
	}
	return 0;
}