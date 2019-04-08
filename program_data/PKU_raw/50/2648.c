int main()
{
	int w,i;
	scanf("%d",&w);
	int a[11]={31,28,31,30,31,30,31,31,30,31,30};
	int b[12];
	b[0]=w+12;
	if(b[0]%7==5)printf("1\n");
	for(i=1;i<12;i++)
	{
		b[i]=b[i-1]+a[i-1];
		if(b[i]%7==5)printf("%d\n",i+1);
	}
}