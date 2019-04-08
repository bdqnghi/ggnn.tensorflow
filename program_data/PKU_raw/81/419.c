int main()
{
	int a[5][5];
	int i,m,c,b,x;
	int *p;
	for(m=0;m<5;m++)
	{for(i=0;i<4;i++)
		scanf("%d ",&a[m][i]);
	scanf("%d",&a[m][4]);}
scanf("%d %d",&c,&b);
if(c>=0&&c<=4&&b>=0&&b<=4)
{
	for(i=0;i<5;i++)
{
	x=a[c][i];
    a[c][i]=a[b][i];
	a[b][i]=x;}
for(m=0;m<5;m++)
	{for(i=0;i<4;i++)
		printf("%d ",a[m][i]);
printf("%d\n",a[m][4]);}
}
else printf("error");
}


