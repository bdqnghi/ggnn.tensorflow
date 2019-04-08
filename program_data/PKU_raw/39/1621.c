struct student
{
	char name[20];
	int a;
	int b;
	char c;
	char d;
	int e;
    int f; 
}stu[101];
 main()
{
	int n,i,sum=0,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s %d %d %c %c %d",stu[i].name,&stu[i].a,&stu[i].b,&stu[i].c,&stu[i].d,&stu[i].e);
		stu[i].f=0;
		if(stu[i].a>80&&stu[i].e>0) stu[i].f+=8000;
		if(stu[i].a>85&&stu[i].b>80) stu[i].f+=4000;
		if(stu[i].a>90) stu[i].f+=2000;
		if(stu[i].d=='Y'&&stu[i].a>85) stu[i].f+=1000;
		if(stu[i].b>80&&stu[i].c=='Y') stu[i].f+=850;
	}
	for(j=0;j<n;j++)
     	sum=sum+stu[j].f;
	stu[100]=stu[0];
	for(j=1;j<n;j++)
	{
		if(stu[j].f>stu[100].f )
			stu[100]=stu[j];
	}
	printf("%s\n%d\n%d\n",stu[100].name,stu[100].f,sum);
}
