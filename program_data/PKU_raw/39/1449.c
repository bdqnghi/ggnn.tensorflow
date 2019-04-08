struct inf
{
	char name[30];
	int s1;//??
	int s2;//??
	char a;//??
	char b;//??
	int num;//??
};
void main()
{
	int n,i,t,total=0,money[100]={0},max=0;
	struct inf c[100];
	scanf("%d",&n);	
	for(i=0;i<n;i++)
	{
		scanf("%s",c[i].name);
		scanf("%d %d",&c[i].s1,&c[i].s2);
		scanf(" %c %c ",&c[i].a,&c[i].b);//??????????
		scanf("%d",&c[i].num);
	}
	for(i=0;i<n;i++)
	{
		if(c[i].s1>80&&c[i].num>0)
			money[i]=money[i]+8000;
		if(c[i].s1>85&&c[i].s2>80)
			money[i]=money[i]+4000;
		if(c[i].s1>90)
			money[i]=money[i]+2000;
		if(c[i].s1>85&&c[i].b=='Y')
			money[i]=money[i]+1000;
		if(c[i].s2>80&&c[i].a=='Y')
			money[i]=money[i]+850;
	}
	for(i=0;i<n;i++)
	{
		if(money[i]>max)
		{
			max=money[i];
			t=i;
		}
		total+=money[i];
	}
	printf("%s\n",c[t].name);
	printf("%d\n",max);
	printf("%d",total);
}



		  





		
		
