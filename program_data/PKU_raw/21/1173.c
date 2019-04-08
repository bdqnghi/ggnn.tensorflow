int main()
{
    int m=0,n,i,j,a[300],s=0,d[300],t;
	double ave,c[300],max=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		s+=a[i];
	}
	ave=(double)s/n;
	for(i=0;i<n;i++){
		c[i]=fabs(a[i]-ave);
		if(c[i]>max) max=c[i];
	}
	for(i=0;i<n;i++)
		if(c[i]==max){
			d[m++]=a[i];
		}
	for(j=1;j<m;j++)
		for(i=0;i<m-j;i++)
			if(d[i]>d[i+1]){
				t=d[i];
				d[i]=d[i+1];
				d[i+1]=t;
			}
    printf("%d",d[0]);
	for(i=1;i<m;i++) printf(",%d",d[i]);
	return 0;
}