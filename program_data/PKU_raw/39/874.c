int main()
{
    struct student
	{
	   char name[30];
	   int qimo;
	   int ping;
	   char ban;
	   char xi;
	   int paper;
	}a[100];
	int N,i,b[100]={0},max,t,s=0;
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		scanf("%s%d%d %c %c %d",a[i].name,&a[i].qimo,&a[i].ping,&a[i].ban,&a[i].xi,&a[i].paper);
	}
	for(i=0;i<N;i++)
	{
		if((a[i].qimo>80)&&(a[i].paper>=1))
			b[i]=b[i]+8000;
		if((a[i].ping>80)&&(a[i].qimo>85))
			b[i]=b[i]+4000;
		if(a[i].qimo>90)
			b[i]=b[i]+2000;
		if((a[i].qimo>85)&&(a[i].xi=='Y'))
			b[i]=b[i]+1000;
		if((a[i].ping>80)&&(a[i].ban=='Y'))
			b[i]=b[i]+850;
	}
	max=b[0];
	t=0;
	for(i=0;i<N;i++)
	{
		s=s+b[i];
		if(b[i]>max)
		{
			max=b[i];
			t=i;
		}
	}
	printf("%s\n%d\n%d\n",a[t].name,max,s);
	return 0;
}
