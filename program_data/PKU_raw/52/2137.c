void main()
{
	int n,m,i,j,t,s;
	int a[100];
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<m;i++)
	{
		t=a[0];
	for(j=1;j<n;j++)
	{ 
		s=a[j];
		a[j]=t;
		t=s;
	}
	a[0]=t;
	}
printf("%d",a[0]);
for(i=1;i<n;i++)
printf(" %d",a[i]);

}