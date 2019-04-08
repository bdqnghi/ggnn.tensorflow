
struct profile
{
	char name[20];
	int grade; int approval;
	char west; char manager;
	int paper; int prize;
};

int prizetoget(int gra,int app,char w,char ma,int pa)
{
	int initial=0;
	if((pa>=1)&&(gra>80)) initial+=Principal;
	if((gra>85)&&(app>80)) initial+=Wusi;
	if(gra>90) initial+=Highmark;
	if((gra>85)&&(w=='Y')) initial+=Western;
	if((app>80)&&(ma=='Y')) initial+=Devotion;
	return initial;
}

int main()
{ 
	struct profile student[100];              
	int n,i,most=0,No,sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s%d%d %c %c%d",student[i].name,&student[i].grade,&student[i].approval,&student[i].manager,&student[i].west,&student[i].paper);
		student[i].prize=prizetoget(student[i].grade,student[i].approval,student[i].west,student[i].manager,student[i].paper);
		sum+=student[i].prize;
	}

	for(i=0;i<n;i++){
		if(student[i].prize>most)
		{
			most=student[i].prize;
			No=i;
		}
	}
	
	printf("%s\n%d\n%d",student[No].name,most,sum);
	return 0;
} 
