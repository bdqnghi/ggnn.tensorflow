int RY(int year)
{
	int k;
	if (year%4==0)
	{
		if (year%100==0)
		{
		if (year%400==0) k=1;
		else k=0;
		}
		else k=1;
	}
	else k=0;
	return (k);
}
int NO(int a,int b,int c)
{
	int NO,i,j;
	NO=0;
	for(i=0;i<a;i++)
	{
		if (RY(i)==1) NO=NO+366;
		else NO=NO+365;
	}
	for(j=1
		;j<b;j++)
	{
		if (j==1||j==3||j==5||j==7||j==8||j==10||j==12)NO=NO+31;
		else if(j==4||j==6||j==9||j==11)NO=NO+30;
		else if(RY(a)==1)NO=NO+29;
		else NO=NO+28;
	}
	NO=NO+c;
	return (NO);
}
void main()
{
	int a1,b1,c1,a2,b2,c2,x,y,z;
	scanf("%d%d%d",&a1,&b1,&c1);
	scanf("%d%d%d",&a2,&b2,&c2);
	x=NO(a1,b1,c1);
	y=NO(a2,b2,c2);
	z=y-x;
	printf("%d",z);
}
