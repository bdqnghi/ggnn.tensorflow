int main()
{
	int count,max1,max2,i,a,b,c;
	scanf("%d\n",&count);
	scanf("%d%d",&b,&c);
	if(b>c)
		max1=b,max2=c;
	else if(b<c) max1=c,max2=b;
	else max1=max2=b=c;

	for(i=1;i<=count-2;i++)
	{
		scanf("%d",&a);
		if(a>max1)
		{
			max2=max1;
			max1 = a;
		}
		else if(max2<a && a<max1)
			max2 =a;
		else
		{
			max1=max1;
			max2=max2;
		}
	}
	printf("%d\n%d",max1,max2);
	return 0;
}