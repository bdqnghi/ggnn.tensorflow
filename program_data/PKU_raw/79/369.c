void main()
{
	int i,j,n,m,t,a[300][2],s;for(;;){
	scanf("%d%d",&n,&m);if(n==0)break;
	for(i=0;i<n;i++)a[i][0]=i;
	for(t=n,s=0;t>1;t--,s=!s)for(i=m%t,j=0;j<t-1;i++,j++)a[j][!s]=a[i%t][s];
	printf("%d\n",a[0][s]+1);
}}