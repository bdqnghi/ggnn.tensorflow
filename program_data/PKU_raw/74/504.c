int hui(int a)
{
	int b=0,c;
	c=a;
	do
	{
		b=10*b+a%10;
		a=(a-a%10)/10;
	}while(a!=0);
	if(b==c) return 1;
	else return 0;
}
int sui(int a)
{
	int i;
	for(i=2;i<a;i++) if(a%i==0)break;
	if(i==a) return 1;
	else return 0;
}
void main()
{
	int m,n,i,j,a[100];
	scanf("%d %d",&m,&n);
	for(i=m,j=0;i<=n;i++) if(hui(i)==1&&sui(i)==1) a[j++]=i;
	if(j==0) printf("no\n");
	else
	{
		for(i=0;i<j-1;i++) printf("%d,",a[i]);
	    printf("%d\n",a[j-1]);
	}
}
