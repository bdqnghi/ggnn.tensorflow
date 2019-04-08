
int invert (int a)
{
	int b,c=0,i,j;
	if (a>=0)
		b=a;
	if (a<0)
		b=-a;
	while (b>0)
	{
		c=c*10+b%10;
		b=b/10;
	}
	if (a>=0)
		c=c;
	if (a<0)
		c=-c;
	return c;
}

void main ()
{
	int i,a[6];
	for (i=0;i<6;i++)
		scanf("%d",&a[i]);
	for (i=0;i<6;i++)
		printf("%d\n",invert(a[i]));
}