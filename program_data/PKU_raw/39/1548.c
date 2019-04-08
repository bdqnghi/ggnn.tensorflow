

int main()
{
	int total=0,i,n,max=0;
	char maxname[20];
	struct 
	{
		int a,b,c,sum;
		char name[20];
		char west,office;
	}student[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s %d %d %c %c %d",student[i].name,&student[i].a,&student[i].b,&student[i].office,&student[i].west,&student[i].c);
		student[i].sum=0;
	}
	for(i=0;i<n;i++)
	{
		if(student[i].a>80&&student[i].c>=1)
		{
			student[i].sum+=8000;
			total+=8000;
		}
		if(student[i].a>85&&student[i].b>80)
		{
			student[i].sum+=4000;
			total+=4000;
		}
		if(student[i].a>90)
		{
			student[i].sum+=2000;
			total+=2000;
		}
		if(student[i].west=='Y'&&student[i].a>85)
		{
			student[i].sum+=1000;
			total+=1000;
		}
		if(student[i].office=='Y'&&student[i].b>80)
		{
			student[i].sum+=850;
			total+=850;
		}
	}
	for(i=0;i<n;i++)
	{
		if(student[i].sum>max)
		{
			max=student[i].sum;
			strcpy(maxname,student[i].name);
		}
	}
	printf("%s\n%d\n%d",maxname,max,total);
	return 0;
}