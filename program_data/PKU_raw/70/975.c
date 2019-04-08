int main()
{
	int n,i,j,p=1;
	float a[100],b[100],c[10000];
	scanf("%d",&n);
	for(i=0;i<n;i++)  {
		scanf("%f %f",&a[i],&b[i]);
	}
	c[0]=0;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++) {
			c[p]=sqrt((a[i]-a[j])*(a[i]-a[j])+(b[i]-b[j])*(b[i]-b[j]));
			if(c[p]>c[0]) {
			   c[0]=c[p];
				p++;
		    }
		}
		printf("%.4f\n",c[0]);
		return 0;
}


