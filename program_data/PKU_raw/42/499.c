void main()
{
	int a[100001],n,i,j,x,m,t;
	scanf("%d\n",&n);
	for(i=0;i<n;i++) scanf("%d",&a[i]);
	a[n]=0;
	scanf("%d\n",&x);
	for(m=0,i=0;i<n;i++) 
		if(a[i]==x) 
		{
			t=i;
			for(j=t;j<n;j++) a[j]=a[j+1];
			m++;
			i--;
		}
	for(i=0;i<n-m-1;i++) printf("%d ",a[i]);
	printf("%d\n",a[n-m-1]);
}
