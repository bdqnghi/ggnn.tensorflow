
int main()
{
	int n,i,s,total=0;
	struct 
	{char name[21];
	 int ave;
	 int mar;
	 int es;
	 char a;
	 char b;
	 int sum;
	}stu[100];
	scanf("%d", &n);
	for(i=0;i<n;i++)
		scanf("%s %d %d %c %c %d", stu[i].name, &stu[i].ave, &stu[i].mar, &stu[i].a, &stu[i].b, &stu[i].es);
	
	for(i=0;i<n;i++)
	{
		stu[i].sum=0;
		if(stu[i].ave>80&&stu[i].es>0) stu[i].sum+=8000;
		if(stu[i].ave>85&&stu[i].mar>80) stu[i].sum+=4000;
		if(stu[i].ave>90) stu[i].sum+=2000;
		if(stu[i].ave>85&&stu[i].b=='Y') stu[i].sum+=1000;
		if(stu[i].mar>80&&stu[i].a=='Y') stu[i].sum+=850;
		total+=stu[i].sum;
	}
	s=stu[0].sum;
	for(i=1;i<n;i++)
	{
		if(stu[i].sum>s) s=stu[i].sum;
	}
	for(i=0;i<n;i++)
	{
		if(stu[i].sum==s)
		{	
			printf("%s\n%d\n", stu[i].name, stu[i].sum);
		    break;}
	}
	printf("%d", total);
	return 0;
}
