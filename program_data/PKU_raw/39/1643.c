void main()
{
	int n,i,qians[100],sum,t,d;
	int jiangj(int a,int b,char d,char e,int c);
	struct student
	{
		char name[20];
		int qimo;
		int py;
		char a;
		char b;
		int paper;
	};
	struct student stu[100];
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s %d %d %c %c %d",stu[i].name,&stu[i].qimo,&stu[i].py,&stu[i].a,&stu[i].b,&stu[i].paper);
		qians[i]=jiangj(stu[i].qimo,stu[i].py,stu[i].a,stu[i].b,stu[i].paper);
	}
	for(i=0,t=0,sum=0;i<n;i++)
	{
		sum=sum+qians[i];
		if(t<qians[i])
		{
			d=i;
			t=qians[i];
		}
	}
	printf("%s\n%d\n%d",stu[d].name,qians[d],sum);
}
int jiangj(int a,int b,char d,char e,int c)
{
	int z;
	z=0;
	if(a>80&&c>0)
		z=z+8000;
	if(a>85&&b>80)
		z=z+4000;
	if(a>90)
		z=z+2000;
	if(a>85&&e=='Y')
		z=z+1000;
	if(b>80&&d=='Y')
		z=z+850;
	return(z);
}