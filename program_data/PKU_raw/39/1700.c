struct student
{
	char name[20];
	int mo;
	int ban;
	char ganbu;
	char xibu;
	int lunwen;
};
int main()
{
	int n,i,j,s[100],max,t,S=0;
	struct student stu[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s %d %d %c %c %d",&stu[i].name,&stu[i].mo,&stu[i].ban,&stu[i].ganbu,&stu[i].xibu,&stu[i].lunwen);
	}
	for(i=0;i<n;i++)
	{
		s[i]=0;
		if(stu[i].mo>80&&stu[i].lunwen>0)
			s[i]=s[i]+8000;
		if(stu[i].mo>85&&stu[i].ban>80)
			s[i]=s[i]+4000;
		if(stu[i].mo>90)
			s[i]=s[i]+2000;
		if(stu[i].mo>85&&stu[i].xibu=='Y')
			s[i]=s[i]+1000;
		if(stu[i].ban>80&&stu[i].ganbu=='Y')
			s[i]=s[i]+850;
	}
	for(i=0;i<n;i++)
	{
		S=S+s[i];
	}
	max=s[0];
	for(i=1;i<n;i++)
	{
		if(max<s[i])
		{
			max=s[i];
			t=i;
		}
	}
	printf("%s\n%d\n%d",stu[t].name,s[t],S);
	return 0;
}