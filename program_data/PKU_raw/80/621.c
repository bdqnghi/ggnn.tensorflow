int run(int a)
{
	int c;
	if(a%400==0||(a%4==0&&a%100!=0))
		c=1;
	else
		c=0;
	return c;
}
int dijitian(int y,int m,int d)
{
    int c,p=0,i;
	c=run(y);
    for(i=1;i<m;i++)
	{
		if(i==4||i==6||i==9||i==11)
		 p=p+30;
		else if(i==2&&c==1)
	      p=p+29;
		else if(i==2&&c==0)
			p=p+28;
		else
			p=p+31;

	 }
	p=p+d;
	return p;
}
void main()
{
	int y1,m1,d1,y2,m2,d2;
	int a,b,c=0,result,temp,i;
	scanf("%d%d%d%d%d%d",&y1,&m1,&d1,&y2,&m2,&d2);
	a=dijitian(y1,m1,d1);
	b=dijitian(y2,m2,d2);
	if(y1==y2)
	{
        result=a-b;
		if(result<0)
			result=0-result;
	}
	else
	{
        if(y1>y2)
		{
            temp=y1;
			y1=y2;
			y2=temp;
			temp=m1;
			m1=m2;
			m2=temp;
			temp=d1;
			d1=d2;
			d2=temp;
		}
		if(run(y1)==1)
			a=366-a;
		else
			a=365-a;
		for(i=y1+1;i<y2;i++)
		{
			if(run(i)==1) c=c+366;
			else c=c+365;
		}
		result=a+b+c;
	}
	printf("%d",result);
}