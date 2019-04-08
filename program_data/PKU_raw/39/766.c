struct student
{
	char name[30];
	int mark1;
	int mark2;
	char worker;
	char west;
	int paper;
	int RMB;
}stu[Max];
int main()
{
	int n,i=0,j,S=0,b[Max],t;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		stu[i].RMB=0;
		scanf("%s%d%d %c %c%d",stu[i].name,&stu[i].mark1,&stu[i].mark2,&stu[i].worker,&stu[i].west,&stu[i].paper);
		if(stu[i].mark1>80&&stu[i].paper!=0)
			stu[i].RMB=stu[i].RMB+8000;
		if(stu[i].mark1>85&&stu[i].mark2>80)
			stu[i].RMB=stu[i].RMB+4000;
		if(stu[i].mark1>90)
			stu[i].RMB=stu[i].RMB+2000;	
		if(stu[i].mark2>80&&stu[i].worker=='Y')
			stu[i].RMB=stu[i].RMB+850;
		if(stu[i].mark1>85&&stu[i].west=='Y')
			stu[i].RMB=stu[i].RMB+1000;
	
		b[i]=stu[i].RMB;
	}
	for(i=0;i<n;i++)
	{
		S=S+stu[i].RMB;
	}

	for(i=1;i<n;i++)
		for(j=0;j<n-i;j++)
		{
			if(b[j+1]<b[j])
			{
				t=b[j+1];
			b[j+1]=b[j];
			b[j]=t;
			}
		}
	for(i=0;i<n;i++)
		if(stu[i].RMB==b[n-1]){

			printf("%s\n%d\n%d\n",stu[i].name,stu[i].RMB,S);
break;}
			return 0;
}
