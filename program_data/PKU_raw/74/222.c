
int ifhuiwen (int a)
{
	int flag,i,t,a_;
	a_=a;
	for (i=10,t=0;a_!=0;)
	{
		t=t*10+a_%i;
		a_=a_/i;
	}
	if (t==a)
		flag=1;
	return flag;
}

int ifsushu (int a)
{
	int flag=1,i;
	for (i=2;i<a/2+1;i++)
	{
		if (a%i==0)
			flag=0;
	}
	return flag;
}

void main ()
{
	int min, max,i,flag=0;
	scanf ("%d %d",&min,&max);
	for (i=min;i<=max;i++)
	{
		if (ifhuiwen(i)==1 && ifsushu(i)==1 && flag==0)
		{
			printf ("%d",i);flag=i;
		}
		if (ifhuiwen(i)==1 && ifsushu(i)==1 && i!=flag)
			printf (",%d",i);
	}
	if (flag==0)
		printf ("no");
}