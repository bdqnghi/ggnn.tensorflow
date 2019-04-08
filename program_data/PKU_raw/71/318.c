void main()
{
	void func(int,int,int);
	int y,x,z,n,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d%d%d",&y,&x,&z);
		func(y,x,z);
	}
}
void func(year,m1,m2)
{
	int judge(int);
	int p,q;
	if(judge(year)==1)
	{
		switch(m1)
		{
		case 1:p=1;break;
		case 2:p=32;break;
		case 3:p=61;break;
		case 4:p=92;break;
		case 5:p=122;break;
		case 6:p=153;break;
		case 7:p=183;break;
		case 8:p=214;break;
		case 9:p=245;break;
		case 10:p=275;break;
		case 11:p=306;break;
		default:p=336;break;
		}
		switch(m2)
		{
		case 1:q=1;break;
		case 2:q=32;break;
		case 3:q=61;break;
		case 4:q=92;break;
		case 5:q=122;break;
		case 6:q=153;break;
		case 7:q=183;break;
		case 8:q=214;break;
		case 9:q=245;break;
		case 10:q=275;break;
		case 11:q=306;break;
		default:q=336;break;
		}
		if((p-q)%7==0)
		{
			printf("YES\n");
		}
		else printf("NO\n");
	}
	else if(judge(year)==2)
	{
		switch(m1)
		{
		case 1:p=1;break;
		case 2:p=32;break;
		case 3:p=60;break;
		case 4:p=91;break;
		case 5:p=121;break;
		case 6:p=152;break;
		case 7:p=182;break;
		case 8:p=213;break;
		case 9:p=244;break;
		case 10:p=274;break;
		case 11:p=305;break;
		default:p=335;break;
		}
		switch(m2)
		{
		case 1:q=1;break;
		case 2:q=32;break;
		case 3:q=60;break;
		case 4:q=91;break;
		case 5:q=121;break;
		case 6:q=152;break;
		case 7:q=182;break;
		case 8:q=213;break;
		case 9:q=244;break;
		case 10:q=274;break;
		case 11:q=305;break;
		default:q=335;break;
		}
		if((p-q)%7==0)
		{
			printf("YES\n");
		}
		else printf("NO\n");
	}
}
int judge(year)
{
	int f;
	if((year%4==0&&year%100!=0)||year%400==0) f=1;
	else f=2;
	return f;
}