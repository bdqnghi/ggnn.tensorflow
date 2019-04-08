struct stud
{
	char a[30];
	int sco1;
	int sco2;
	char mon;
	char west;
	int ess;
};
main()
{
	struct stud xx[100];
	int n,i,my[100],max,sum=0,re;
	scanf("%d",&n);
	getchar();
	for(i=0;i<n;i++)
	{
		scanf("%s%d %d %c %c %d",xx[i].a,&xx[i].sco1,&xx[i].sco2,&xx[i].mon,&xx[i].west,&xx[i].ess);
		getchar();
		my[i]=0;
        if(xx[i].sco1>80&&xx[i].ess>0)
			my[i]=my[i]+8000;
		if(xx[i].sco1>85&&xx[i].sco2>80)
			my[i]=my[i]+4000;
		if(xx[i].sco1>90)
			my[i]=my[i]+2000;
		if(xx[i].sco1>85&&xx[i].west=='Y')
			my[i]=my[i]+1000;
		if(xx[i].sco2>80&&xx[i].mon=='Y')
			my[i]=my[i]+850;
	}
	max=my[0];
	for(i=0;i<n;i++)
	{
		sum=sum+my[i];
		if(my[i]>max)
		{
			max=my[i];
			re=i;
		}
	}
	printf("%s\n%d\n%d",xx[re].a,max,sum);
}