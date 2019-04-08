struct student
{
	char name[20];
	int a;
	int b;
	char c;
	char d;
	int e;
	int sum;
}stu[100];
int f1(int a,int b);
int f2(int a,int b);
int f3(int a);
int f4(int a,char b);
int f5(int a,char b);
int main()
{
	int n=0,i=0,sum=0,k=0,j=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s %d %d %c %c %d",stu[i].name,&stu[i].a,&stu[i].b,&stu[i].c,&stu[i].d,&stu[i].e);
		stu[i].sum=0;
	}
	for(i=0;i<n;i++)
	{
		if(f1(stu[i].a,stu[i].e)==1)
		{
			stu[i].sum+=8000;
			sum+=8000;
		}
		if(f2(stu[i].a,stu[i].b)==1)
		{
			stu[i].sum+=4000;
			sum+=4000;
		}
		if(f3(stu[i].a)==1)
		{
			stu[i].sum+=2000;
			sum+=2000;
		}
		if(f4(stu[i].a,stu[i].d)==1)
		{
			stu[i].sum+=1000;
			sum+=1000;
		}
		if(f5(stu[i].b,stu[i].c)==1)
		{
			stu[i].sum+=850;
			sum+=850;
		}
	}
	k=stu[0].sum;
	for(i=0;i<n;i++)
	{
		if(k<stu[i].sum)
		{
			j=i;
			k=stu[i].sum;
		}
	}
	printf("%s\n%d\n%d",stu[j].name,stu[j].sum,sum);
	return 0;
}
int f1(int a,int b)
{
	if(a>80&&b>=1)
	return 1;
	else return 0;
}
int f2(int a,int b)
{
	if(a>85&&b>80)
	return 1;
	else return 0;
}
int f3(int a)
{
	if(a>90)
	return 1;
	else return 0;
}
int f4(int a,char b)
{
	if(a>85&&b=='Y')
	return 1;
	else return 0;
}
int f5(int a,char b)
{
	if(a>80&&b=='Y')
	return 1;
	else return 0;
}