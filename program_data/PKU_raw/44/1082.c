int main()
{
	int a[6];
	int i;
	for(i=0;i<6;i++)
	{
	scanf("%d",&a[i]);
	}
	for(i=0;i<6;i++)
		fxs(a[i]);
	return 0;

}
	
void fxs(int a)
{
	int i,b=0;
	int c[15]={0};
	if(a<0)printf("-");
	
	a=abs(a);
	for(i=0;a>0;a=a/10,i++)
	{
		c[i]=a%10;
		b++;
	}
	for(i=0;i<b;i++)
		a=c[i]*pow(10,b-i-1)+a;
	printf("%d\n",a);
}