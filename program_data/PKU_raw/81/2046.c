int a[5][5];
int n,m;
int ser()
{
	int t,i,*p,*q;
	if((n>4||n<0)||(m>4||m<0))
		return 0;
	else
	{
		p=a[n]; q=a[m];
		for(i=0;i<5;i++,p++,q++)
		{
			t=*p; *p=*q; *q=t;
		}
		return 1;
	}
}
void main()
{
	int i,j,t,*p;
	p=a;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
			scanf("%d",&a[i][j]);
	}
	scanf("%d %d",&n,&m);
	t=ser();
	if(t==0)
		printf("error");
	if(t==1)
	{
		for(i=0;i<5;i++)
		{
		for(j=0;j<4;j++)
			printf("%d ",a[i][j]);
		printf("%d\n",a[i][4]);
		}
	}
}

