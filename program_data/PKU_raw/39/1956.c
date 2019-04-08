main()
{
	int n,i,j,m=0,t,s=0,a[100][5]={0},b[100],c[100];
	struct student
	{
		char name[20];
		int qimo;
		int pingyi;
		char ganbu;
		char xibu;
		int lunwen;
	};
	struct student stu[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%s %d %d %c %c %d",stu[i].name,&stu[i].qimo,&stu[i].pingyi,&stu[i].ganbu,&stu[i].xibu,&stu[i].lunwen);
	for(i=0;i<n;i++)
	{
		if(stu[i].qimo>80&&stu[i].lunwen>=1) a[i][0]=8000;
		if(stu[i].qimo>85&&stu[i].pingyi>80) a[i][1]=4000;
		if(stu[i].qimo>90) a[i][2]=2000;
		if(stu[i].qimo>85&&stu[i].xibu=='Y') a[i][3]=1000;
		if(stu[i].pingyi>80&&stu[i].ganbu=='Y') a[i][4]=850;
		b[i]=a[i][0]+a[i][1]+a[i][2]+a[i][3]+a[i][4];
	}
	for(i=0;i<n;i++)
		c[i]=b[i];
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
			if(c[j]>c[j+1])
			{
				t=c[j];
				c[j]=c[j+1];
				c[j+1]=t;
			}
	}
	for(i=0;i<n;i++)
	{
		if(b[i]==c[n-1])
		{
			m=i;
			break;
		}
	}
	for(i=0;i<n;i++)
		s=s+b[i];
	printf("%s\n",stu[m].name);
	printf("%d\n",c[n-1]);
	printf("%d\n",s);
	return 0;
}
