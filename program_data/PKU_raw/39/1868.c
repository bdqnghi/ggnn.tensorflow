struct student{
		char name[20];
		int s1;
		int s2;
		char gb;
		char w;
		int p;
		int m;
	};
	
void main()
{
	int i,j,sum=0,n,max=0,t;
	struct student stu[100];
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
	stu[i].m=0;
	scanf("%s %d %d %c %c %d",&(stu[i].name),&(stu[i].s1),&(stu[i].s2),&(stu[i].gb),&(stu[i].w),&(stu[i].p));
	if(stu[i].s1>80 && stu[i].p>0)   stu[i].m=stu[i].m+8000;
	if(stu[i].s1>85 && stu[i].s2>80 )    stu[i].m=stu[i].m+4000;	
	if(stu[i].s1>90)    stu[i].m=stu[i].m+2000;
	if(stu[i].s1>85 && stu[i].w=='Y')  stu[i].m=stu[i].m+1000;
	if(stu[i].s2>80 && stu[i].gb=='Y')  stu[i].m=stu[i].m+850;
	sum=sum+stu[i].m;
	}
	
	for(i=0;i<n;i++)
	if(stu[i].m>max)
	max=stu[i].m;
	
	for(i=0;i<n;i++)
	if(stu[i].m==max){
	printf("%s\n%d\n%d",stu[i].name,max,sum);break;
	}
}