int RN(int y)
{
	int z;
	if(y%400==0||(y%4==0&&y%100!=0))
		z=1;
	else z=0;
	return z;
}
int PD(int N,int Y1,int Y2)
{
	int RN(int y),i,j,k=0,m=0;
	if(RN(N)==1)
	{
		if(Y1>Y2)
		{
			for(i=Y2;i<Y1;i++)
			{
				if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
					k=31;
				else if(i==4||i==6||i==9||i==11)
					k=30;
				else k=29;
				m=m+k;
			}
		}
		if(Y1<Y2)
		{
			for(i=Y1;i<Y2;i++)
			{
				if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
					k=31;
				else if(i==4||i==6||i==9||i==11)
					k=30;
				else k=29;
				m=m+k;
			}
		}
	}
	else
	{
		if(Y1>Y2)
		{
			for(i=Y2;i<Y1;i++)
			{
				if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
					k=31;
				else if(i==4||i==6||i==9||i==11)
					k=30;
				else k=28;
				m=m+k;
			}
		}
		if(Y1<Y2)
		{
			for(i=Y1;i<Y2;i++)
			{
				if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
					k=31;
				else if(i==4||i==6||i==9||i==11)
					k=30;
				else k=28;
				m=m+k;
			}
		}
	}
	if(m%7==0)j=1;
	else j=0;
	return j;
}
void main()
{
	int *a,*A,m,n,b,c,d,i;
	int PD(int N,int Y1,int Y2);
	int RN(int y);
	scanf("%d",&n);
	a=(int*)malloc(n*sizeof(int));
	A=a;
	for(i=0;i<n;i++)
	{
		scanf("%d%d%d",&b,&c,&d);
		*a=PD(b,c,d);
		a++;
	}
	for(i=0;i<n;i++,A++)
	{
		if(*(A)==1)
			printf("YES\n");
		else
			printf("NO\n");
	}
}
