int main()
{
	struct{
		int n;
		int a;
		int b;
	}n[100000];
	int m,i,sum[100000],first,second,third,d,e,f;
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		scanf("%d",&n[i].n);
		scanf("%d",&n[i].a);
		scanf("%d",&n[i].b);
		sum[i]=n[i].a+n[i].b;
	}
	if(sum[0]>sum[1]&&sum[0]>sum[2]&&sum[1]>sum[2])
	{
		first=sum[0];
		second=sum[1];
		third=sum[2];
		d=1;
		e=2;
		f=3;
	}
	else if (sum[0]>sum[1]&&sum[1]<sum[2]&&sum[0]>sum[2])
	{
		first=sum[0];
		second=sum[2];
		third=sum[1];
		d=1;
		e=3;
		f=2;
	}
	else if (sum[0]<sum[1]&&sum[1]>sum[2]&&sum[0]>sum[2])
	{
		first=sum[1];
		second=sum[0];
		third=sum[2];
		d=2;
		e=1;
		f=3;
	}
    else if (sum[0]<sum[1]&&sum[1]>sum[2]&&sum[0]<sum[2])
	{
		first=sum[1];
		second=sum[2];
		third=sum[0];
		d=2;
		e=3;
		f=1;
	}
    else if (sum[0]<sum[1]&&sum[1]<sum[2]&&sum[0]<sum[2])
	{
		first=sum[2];
		second=sum[1];
		third=sum[0];
		d=3;
		e=2;
		f=1;
	}
    else if (sum[0]>sum[1]&&sum[1]<sum[2]&&sum[0]<sum[2])
	{
		first=sum[2];
		second=sum[0];
		third=sum[1];
		d=3;
		e=1;
		f=2;
	}
	for(i=3;i<m;i++)
	{
		if(sum[i]>first)
		{
			third=second;
			second=first;
			first=sum[i];
			f=e;
			e=d;
			d=i+1;
		}
		else if (sum[i]<=first&&sum[i]>second)
		{
			third=second;
			second=sum[i];
			f=e;
			e=i+1;
		}
		else if (sum[i]<=second&&sum[i]>third)
		{
			third=sum[i];
			f=i+1;
		}
	}
	printf("%d %d\n",d,first);
	printf("%d %d\n",e,second);
	printf("%d %d\n",f,third);
	return 0;
}