int ss(int x);
int hw(int x);
void main()
{
	int m,n,count=0,a[100],i;
	scanf("%d%d",&m,&n);
	for(i=m;i<=n;i++)
	{
		if(ss(i)==1&&hw(i)==1)
		{
			a[count]=i;
			count++;
		}
	}
	if(count==0)
	{
		printf("no");
	}
	else
	{
		for(i=0;i<=count-2;i++)
		{
			printf("%d,",a[i]);
		}
		printf("%d",a[count-1]);
	}
}

int ss(int x)
{
	int i,flag=0;
	for(i=2;i<=x-1;i++)
	{
		if(x%i==0)
		{
			flag=1;
		}
	}
	if(flag==1)
	{
		return 0;
	}
	else return 1;
}

int hw(int x)
{
	int b[10],flag,judge=0,i;
	b[1]=x%10;
	b[2]=x/10%10;
	b[3]=x/100%10;
	b[4]=x/1000%10;
	b[5]=x/10000%10;
	b[6]=x/100000%10;
	for(i=1;i<=6;i++)
	{
		if(b[i]!=0)
		{
			flag=i;
		}
	}
	for(i=1;i<=flag;i++)
	{
		if(b[flag+1-i]!=b[i])
		{
			judge=1;
		}
	}
	if(judge==0)return 1;
	else return 0;
}