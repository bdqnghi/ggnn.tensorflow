int main()
{
	int i;
	float a[100],b[100],c[100];
     a[1]=1;
	 b[1]=2;
	 c[1]=b[1]/a[1];
	for(i=2;i<100;i++){
		a[i]=b[i-1];
		b[i]=a[i]+a[i-1];
		c[i]=b[i]/a[i];
	}
	int n,j,d[100];
	scanf("%d",&n);
	int m[100];
	for(j=0;j<n;j++){
		scanf("%d",&m[j]);
	}
     for(j=0;j<n;j++){
		 float p[100];
		 int k;
		 p[j]=0;
		for(k=1;k<=m[j];k++){
         p[j]+=c[k];
		}
		printf("%.3f\n",p[j]);
	}
	return 0;
}