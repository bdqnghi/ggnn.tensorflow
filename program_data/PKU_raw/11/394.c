
int main(int argc, char* argv[])
{
	int a,b,c,sum;
	scanf ("%d%d%d",&a,&b,&c);
	if (b==1)
	{
		sum=c;
		printf ("%d",sum);
	}
	if (a%4==0&&a%100!=0||a%400==0)
	{
		if (b==2)
		{
			sum=c+31;
			printf ("%d",sum);
		}
		if (b==3)
		{
			sum=c+60;
			printf ("%d",sum);
		}
		if (b==4)
		{
			sum=c+91;
			printf ("%d",sum);
		}
		if (b==5)
		{
			sum=c+121;
			printf ("%d",sum);
		}
		if (b==6)
		{
			sum=c+152;
			printf ("%d",sum);
		}
		if (b==7)
		{
			sum=c+182;
			printf ("%d",sum);
		}
		if (b==8)
		{
			sum=c+213;
			printf ("%d",sum);
		}
		if (b==9)
		{
			sum=c+244;
			printf ("%d",sum);
		}
		if (b==10)
		{
			sum=c+274;
			printf ("%d",sum);
		}
		if (b==11)
		{
			sum=c+305;
			printf ("%d",sum);
		}
		if (b==12)
		{
			sum=c+335;
			printf ("%d",sum);
		}
	}
	else
	{   
		if (b==2)
		{
			sum=c+31;
			printf ("%d",sum);
		}
		if (b==3)
		{
			sum=c+59;
			printf ("%d",sum);
		}
		if (b==4)
		{
			sum=c+90;
			printf ("%d",sum);
		}
		if (b==5)
		{
			sum=c+120;
			printf ("%d",sum);
		}
		if (b==6)
		{
			sum=c+151;
			printf ("%d",sum);
		}
		if (b==7)
		{
			sum=c+181;
			printf ("%d",sum);
		}
		if (b==8)
		{
			sum=c+212;
			printf ("%d",sum);
		}
		if (b==9)
		{
			sum=c+243;
			printf ("%d",sum);
		}
		if (b==10)
		{
			sum=c+273;
			printf ("%d",sum);
		}
		if (b==11)
		{
			sum=c+304;
			printf ("%d",sum);
		}
		if (b==12)
		{
			sum=c+334;
			printf ("%d",sum);
		}
	}
	return 0;
}