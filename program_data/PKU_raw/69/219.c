int main()
{
	int i,j=0,changdu1,changdu2,js=0;
	char a[501],b[501];
	scanf("%s%s",a,b);
	changdu1=strlen(a);
	changdu2=strlen(b);
	for(i=250;i<500;i++)
	{
		a[i]=48;
		b[i]=48;
	}
	for(i=0;i<changdu1;i++)
	{
		a[500-changdu1+i]=a[i];
	}
	for(i=0;i<changdu2;i++)
	{
		b[500-changdu2+i]=b[i];
	}  

	for(i=500;i>249;i--)
	{

		b[i]+=a[i]-48;
		if(b[i]>57&&b[i]<67)
		{
			b[i-1]++;
			b[i]=b[i]-10;
		}
		
	}
	for(i=250;i<500;i++)
	{
		if(j!=0||(b[i]>=49&&b[i]<=57))
		{
			printf("%c",b[i]);
			j=1;
			js++;
		}
	}
	if(js==0)
		printf("0");
	printf("\n");

	return 0;
}