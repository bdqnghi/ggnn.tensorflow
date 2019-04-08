void main()
{
	int a[3];
	int b[3];
	int t;
	int year(int a[],int b[]);
	int month(int a[],int b[]);
	scanf("%d %d %d",&a[0],&a[1],&a[2]);
    scanf("%d %d %d",&b[0],&b[1],&b[2]);
	t=0;
    if(b[0]>=a[0])
		t=t+year(a,b);
	else t=-1000;
	if(b[1]>a[1])
		t=t+month(a,b);
	else t=t-month(a,b);
	t=t+b[2]-a[2];
	if(t<0)
		printf("wrong input");
	else printf("%d",t);
}
int year(int a[],int b[])
{
	int i,m;
	m=0;
	for(i=a[0];i<b[0];i++)
	{
		if(((i%4==0)&&(i%100!=0))||(i%400==0))
			m=m+366;
		else m=m+365;
	}
	return (m);
}
int month(int a[],int b[])
{
	int i,m,c[12],x,y;
	m=0;
	for(i=0;i<=11;i++)
	{
		switch(i)
		{
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12: c[i]=31;break;
			case 2: c[i]=28;break;
			default: c[i]=30;
		}
	}
	x=(a[1]>b[1])? a[1]:b[1];
	y=(a[1]<b[1])? a[1]:b[1];
		for(i=y;i<x;i++)
			m=m+c[i];
		if(y<=2&&x>2)
			if(((b[0]%4==0)&&(b[0]%100!=0))||(b[0]%400==0))
				m++;
		return (m);
}