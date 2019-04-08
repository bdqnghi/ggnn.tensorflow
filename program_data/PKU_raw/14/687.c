
struct stu
{
	char name[20];
	int sbu[3];
};
int main()
{
       int n;
      scanf("%d",&n);
	int i,j=0,j2=0,j3=0,min=0;
	struct stu stu[100000];
	for(i=0;i<n;i++)
	{
		scanf("%s %d %d",stu[i].name,&stu[i].sbu[0],&stu[i].sbu[1]);
		stu[i].sbu[2]=stu[i].sbu[0]+stu[i].sbu[1];
	}
	
	for(i=0;i<n;i++)
	{		
		if(stu[i].sbu[2]>min)
		{min=stu[i].sbu[2];
		j=i;}
	}
		printf("%s %d\n",stu[j].name,min);
min=0;       
for(i=0;i<n;i++)
	{		
		if(stu[i].sbu[2]<=stu[j].sbu[2]&&stu[i].sbu[2]>min&&i!=j)
		{min=stu[i].sbu[2];
		j2=i;}
	}
		printf("%s %d\n",stu[j2].name,min);
min=0;       
for(i=0;i<n;i++)
	{		
		if(stu[i].sbu[2]<=stu[j2].sbu[2]&&stu[i].sbu[2]>min&&i!=j&i!=j2)
		{min=stu[i].sbu[2];
		j3=i;}
	}
		printf("%s %d\n",stu[j3].name,min);
}