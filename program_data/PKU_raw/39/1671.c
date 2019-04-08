int main()
{
	int N,i,sum=0;
	int x[100]={0};
	int total=0;
	struct c{
		char p[20];
		int m1,m2;
		char a,b;
		int n;
	}q[100];
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		char y[20];
		int m11,m22,n11;
		char a1,b1;
		scanf("%s %d %d %c %c %d",y,&m11,&m22,&a1,&b1,&n11);
		strcpy(q[i].p,y);
		q[i].m1=m11;
		q[i].m2=m22;
		q[i].a=a1;
		q[i].b=b1;
		q[i].n=n11;
	}
	for(i=0;i<N;i++)
	{
		if(q[i].m1>80&&q[i].n>0)
		{
			x[i]=x[i]+8000;
		}
		if(q[i].m1>85&&q[i].m2>80)
		{
			x[i]=x[i]+4000;
		}
		if(q[i].m1>90)
		{
			x[i]=x[i]+2000;
		}
		if(q[i].m1>85&&q[i].b=='Y')
		{
			x[i]=x[i]+1000;
		}
		if(q[i].m2>80&&q[i].a=='Y')
		{
			x[i]=x[i]+850;
		}
	}
	for(i=N-1;i>=0;i--)
	{
		if(x[i]>=sum)
		{
			sum=x[i];
		}
		total=total+x[i];
	}
	for(i=0;i<N;i++)
	{
		if(sum==x[i])
		{
			printf("%s\n",q[i].p);
			printf("%d\n",sum);
			printf("%d\n",total);
		    break;
		}
		
	}
	return 0;
}
