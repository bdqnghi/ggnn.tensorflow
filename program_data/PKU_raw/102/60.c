int main()
{
	int n,m=0,d=0,i,j,r;
	double s[40],a[40],b[40];
	char c[10];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s%lf",c,&s[i]);
		if(strlen(c)==4){
			a[m]=s[i];
			m++;
		}else{
			b[d]=s[i];
			d++;
		}
	}
	for(j=m-1;j>0;j--)
	{
		for(r=0;r<j;r++)
		{
			if(a[r]>a[r+1]){
				double tmp;
				tmp=a[r+1];
				a[r+1]=a[r];
				a[r]=tmp;
			}
		}
	}
	for(j=d-1;j>0;j--)
	{
		for(r=0;r<j;r++)
		{
			if(b[r]<b[r+1]){
				double tmp;
				tmp=b[r+1];
				b[r+1]=b[r];
				b[r]=tmp;
			}
		}
	}
	for(i=0;i<m;i++)
	{
		printf("%.2lf ",a[i]);
	}
	for(i=0;i<d;i++)
	{
		if(i==d-1){
			printf("%.2lf",b[i]);
		}else{
			printf("%.2lf ",b[i]);
		}
	}
	return 0;
}