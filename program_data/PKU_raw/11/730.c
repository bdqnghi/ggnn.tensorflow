int f1(int y,int r)
{
	int a[12]={31,29,31,30,31,30,31,31,30,31,30,31};
	int i,k,d=0;
	for(i=0;i<12;i++)
	{
		if(y-1==i)
		{
			for(k=0;k<i;k++)
				d=d+a[k];
		}
	}
	d=d+r;
	return d;
}
int f2(int y,int r)
{
	int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int i,k,d=0;
	for(i=0;i<12;i++)
	{
		if(y-1==i)
		{
			for(k=0;k<i;k++)
				d=d+a[k];
		}
	}
	d=d+r;
	return d;
}
void main ()
{
	int a,y,r,d;
	scanf("%d%d%d",&a,&y,&r);
	if((a%100!=0&&a%4==0)||(a%400==0))
		d=f1(y,r);
	else
		d=f2(y,r);
	printf("%d",d);
	
}
