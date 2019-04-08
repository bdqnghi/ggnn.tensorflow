void main()
{
	char p,a[100005],b[100005];
	int count=0,i;
	scanf("%c",&p);
	while(p!='\n')
	{
		a[count]=p;
		scanf("%c",&p);
		count++;
	}
	for(i=1;i<=count-1;i++)
	{
		b[i-1]=a[i-1]+a[i];
	}
	b[count-1]=a[count-1]+a[0];
	printf("%s",b);
}