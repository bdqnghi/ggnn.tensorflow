struct student
	{char name[20];
	int g1;
	int g2;
	char id1;
	char id2;
	int t;
	int s;
	}stu[100];
void main()
{
	
	int n,sum=0,i,r,m;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		stu[i].s=0;
		scanf("%s%d%d %c %c%d",stu[i].name,&stu[i].g1,&stu[i].g2,&stu[i].id1,&stu[i].id2,&stu[i].t);
		if(stu[i].g1>80&&stu[i].t>0) stu[i].s+=8000;
        if(stu[i].g1>85&&stu[i].g2>80) stu[i].s+=4000;
        if(stu[i].g1>90) stu[i].s+=2000;
        if(stu[i].g1>85&&stu[i].id2=='Y') stu[i].s+=1000;
        if(stu[i].g2>80&&stu[i].id1=='Y') stu[i].s+=850;
		sum+=stu[i].s;
	}		
	m=stu[0].s;r=0;
	for(i=0;i<n;i++)
	{

		if(stu[i].s>m)
		{
			m=stu[i].s;
			r=i;
		}
	}
	printf("%s\n%d\n%d\n",stu[r].name,stu[r].s,sum);
}
