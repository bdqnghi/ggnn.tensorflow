
void main()
{
int N;
scanf("%d",&N);

struct student
{
	char name[20];
	int qm;
	int py;
	char gb;
	char w;
	int lw;
	int jj;
}stu[100];
int i;
for(i=0;i<N;i++)
{

	scanf("%s %d %d %c %c %d",&stu[i].name,&stu[i].qm,&stu[i].py,&stu[i].gb,&stu[i].w,&stu[i].lw);
	stu[i].jj=0;
	if(stu[i].qm>90)stu[i].jj+=2000;
	if(stu[i].qm>80&&stu[i].lw>=1)stu[i].jj+=8000;
    if(stu[i].qm>85&&stu[i].w=='Y')stu[i].jj+=1000;
	if(stu[i].qm>85&&stu[i].py>80)stu[i].jj+=4000;
	if(stu[i].py>80&&stu[i].gb=='Y')stu[i].jj+=850;
}
int trans1;
char trans2[20];
int total=0;
for(i=0;i<N;i++)total+=stu[i].jj;
for(i=0;i<N-1;i++)
{
	if(stu[i].jj>=stu[i+1].jj)
	{
		trans1=stu[i].jj;
		strcpy(trans2,stu[i].name);
		strcpy(stu[i].name,stu[i+1].name);
		stu[i].jj=stu[i+1].jj;
		strcpy(stu[i+1].name,trans2);
		stu[i+1].jj=trans1;
	}
}

 printf("%s\n%d\n%d\n",stu[N-1].name,stu[N-1].jj,total);         
}