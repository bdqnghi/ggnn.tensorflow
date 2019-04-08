int main()
{
	struct s{
		char n[20];
		int p1,p2,p3;
		char a,b;
	}st[100];
	int money[100]={0};
	int i,num;
	int sum=0,m,h;
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		scanf("%s %d %d %c %c %d",st[i].n,&st[i].p1,&st[i].p2,&st[i].a,&st[i].b,&st[i].p3);
	}
	for(i=0;i<num;i++)
	{
		if(st[i].p1>80&&st[i].p3>=1)
		{
			money[i]+=8000;
		}
		if(st[i].p1>85&&st[i].p2>80)
		{
			money[i]+=4000;
		}
		if(st[i].p1>90)
		{
			money[i]+=2000;
		}
		if(st[i].p1>85&&(int)st[i].b=='Y')
		{
			money[i]+=1000;
		}
		if(st[i].p2>80&&(int)st[i].a=='Y')
		{
			money[i]+=850;
		}
	}
	m=money[0];
	h=0;
	for(i=1;i<num;i++)
	{
		if(money[i]>m)
		{
			m=money[i];
			h=i;
		}
	}
	for(i=0;i<num;i++)
	{
		sum+=money[i];
	}
	printf("%s\n",st[h].n);
	printf("%d\n",m);
	printf("%d\n",sum);
	return 0;
}