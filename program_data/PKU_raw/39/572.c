void main()
{
	int a[100]={0},i,j,n,sum=0,p;
	struct student
	{
		char name[20];
		int qimo;
		int banpin;
		char ganbu;
		char pro;
		int pap;
	}stu[101];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%s%d%d %c %c%d",stu[i].name,&stu[i].qimo,&stu[i].banpin,&stu[i].ganbu,&stu[i].pro,&stu[i].pap);
	for(i=0;i<n;i++)
	{
		if(stu[i].qimo>80&&stu[i].pap>=1)
			a[i]=a[i]+8000;
		if(stu[i].qimo>85&&stu[i].banpin>80)
			a[i]=a[i]+4000;
		if(stu[i].qimo>90)
			a[i]=a[i]+2000;
		if(stu[i].qimo>85&&stu[i].pro=='Y')
			a[i]=a[i]+1000;
		if(stu[i].banpin>80&&stu[i].ganbu=='Y')
			a[i]=a[i]+850;
	}
	for(i=0;i<n;i++)
		sum=sum+a[i];
	for(i=0;i<n;i++)
		for(j=0;j<n-1;j++)
			if(a[j]<a[j+1])
			{
				p=a[j+1];
				a[j+1]=a[j];
				a[j]=p;
				
				stu[100]=stu[j+1];
				stu[j+1]=stu[j];
				stu[j]=stu[100];
			}
	printf("%s\n%d\n%d\n",stu[0].name,a[0],sum);
}
