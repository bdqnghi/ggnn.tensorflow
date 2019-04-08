
int main(int argc, char* argv[])
{
    int a,b,c,x;
	scanf("%d%d%d",&a,&b,&c);
	if(a%4==0&&a%100!=0||a%400==0)
	{
	if(b==1)printf("%d",c);
	else if(b==2)
	{x=31+c;printf("%d",x);}
	else if(b==3)
	{x=31+29+c;printf("%d",x);}
	else if(b==4)
	{x=31+29+31+c;printf("%d",x);}
	else if(b==5)
	{x=31+29+31+30+c;printf("%d",x);}
	else if(b==6)
	{x=31+29+31+30+31+c;printf("%d",x);}
	else if(b==7)
	{x=31+29+31+30+31+30+c;printf("%d",x);}
	else if(b==8)
	{x=31+29+31+30+31+30+31+c;printf("%d",x);}
	else if(b==9)
	{x=31+29+31+30+31+30+31+31+c;printf("%d",x);}
	else if(b==10)
	{x=31+29+31+30+31+30+31+31+30+c;printf("%d",x);}
	else if(b==11)
	{x=31+29+31+30+31+30+31+31+30+31+c;printf("%d",x);}
    else if(b==12)
	{x=31+29+31+30+31+30+31+31+30+31+30+c;printf("%d",x);}
	}
	else

	{
	if(b==1)printf("%d",c);
	else if(b==2)
	{x=31+c;printf("%d",x);}
	else if(b==3)
	{x=31+28+c;printf("%d",x);}
	else if(b==4)
	{x=31+28+31+c;printf("%d",x);}
	else if(b==5)
	{x=31+28+31+30+c;printf("%d",x);}
	else if(b==6)
	{x=31+28+31+30+31+c;printf("%d",x);}
	else if(b==7)
	{x=31+28+31+30+31+30+c;printf("%d",x);}
	else if(b==8)
	{x=31+28+31+30+31+30+31+c;printf("%d",x);}
	else if(b==9)
	{x=31+28+31+30+31+30+31+31+c;printf("%d",x);}
	else if(b==10)
	{x=31+28+31+30+31+30+31+31+30+c;printf("%d",x);}
	else if(b==11)
	{x=31+28+31+30+31+30+31+31+30+31+c;printf("%d",x);}
    else if(b==12)
	{x=31+28+31+30+31+30+31+31+30+31+30+c;printf("%d",x);}
	}
}

