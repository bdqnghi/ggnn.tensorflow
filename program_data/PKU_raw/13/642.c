int main()
{
	int a[20000],k,j,b,c,d,e,f,i;
	scanf("%d",&b);
	for(i=0;i<b;i++)
	{scanf("%d",&a[i]);}
	printf("%d",a[0]);
	for(j=1;j<b;j++)
	{for(k=0;k<j;k++)
	{if(a[k]==a[j])break;}
	if(k==j)printf(" %d",a[j]);}
	return 0;
}