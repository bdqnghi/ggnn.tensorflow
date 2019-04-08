int pan1(int a)
{
	int b=0,c=a;

	while(c!=0)
	{
		b=10*b+c%10;
		c=c/10;
	}
	if(a==b) return 1;
	else return 0;
}
int pan2(int a)
{
	int i,y=1;
	for(i=2;i<=sqrt(a);i++) if(a%i==0) y=0;
	return(y);
}
void main()
{
	int a,b,c[100]={0},i,j=0;
	scanf("%d %d",&a,&b);
	for(i=a;i<=b;i++)
	{
		if(pan1(i)&&pan2(i)) {c[j]=i;j=j+1;}
	}
	if(c[0]){for(i=0;i<j-1;i++) printf("%d,",c[i]);
	printf("%d\n",c[j-1]);}
else printf("no");
}