void main()
{
	int i,j,n,a[300]={0},b[300]={0},m,k=1;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	b[0]=a[0];
	for(i=1;i<n;i++)
	{   j=0;m=1;
	while(j<i)
	{ if(a[i]!=a[j]) m=m*1;
	else m=m*0;j++;}
	if(m==1) {b[k]=a[i];k++;}
	}
	for(i=0;i<k-1;i++)
		printf("%d,",b[i]);
	printf("%d\n",b[k-1]);
}