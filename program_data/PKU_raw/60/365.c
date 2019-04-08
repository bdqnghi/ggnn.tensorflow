int matrix(int n)
{
	int i,j,t;
	t=sqrt(n);
	for(i=3;i<=t;i++)
	{if(n%i==0)break;}
	if(i<=t)j=0;
	if(i>t)j=1;
	return j;
}
void main()
{
	int n,i,j=1,m=0,a[10000]={0};
	scanf("%d",&n);
	for(i=3;i<=n;i+=2)
	{	if(matrix(i)==1)a[j++]=i;}
	a[0]=2;
	for(i=0;i<j;i++)
	{if(a[i]+2==a[i+1]){printf("%d %d\n",a[i],a[i+1]);m++;}}
	if(m==0)printf("empty\n");
}