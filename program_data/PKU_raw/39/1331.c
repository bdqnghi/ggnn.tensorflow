struct std
{
	char name[20];
	int qi;
	int ban;
	char xue;
	char xi;
	int lun;
};
int main()
{
	int panduan(struct std x);
	int n,i,*a,max,sum=0;
	struct std*p;
	scanf("%d",&n);
	a=(int*)malloc(n*sizeof(int));
	p=(struct std*)malloc(n*sizeof(struct std));
	for(i=0;i<=n-1;i++)
	{
		scanf("%s %d%d %c %c %d",p[i].name,&p[i].qi,&p[i].ban,&p[i].xue,&p[i].xi,&p[i].lun);
		a[i]=panduan(p[i]);
	}
    for(i=0,max=0;i<=n-1;i++)
	{
		if(a[i]>max)
			max=a[i];
		sum=sum+a[i];
	}
	for(i=0;i<=n-1;i++)
	{
		if(a[i]==max)
		{
			printf("%s\n%d\n",p[i].name,max);
			break;
		}
	}
	printf("%d",sum);
	return 0;
}
int panduan(struct std x)
{
	int sum=0;
	if(x.qi>80&&x.lun>=1)
		sum=sum+8000;
	if(x.qi>85&&x.ban>80)
		sum=sum+4000;
	if(x.qi>90)
		sum=sum+2000;
	if(x.xi=='Y'&&x.qi>85)
		sum=sum+1000;
	if(x.ban>80&&x.xue=='Y')
		sum=sum+850;
	return sum;
}
