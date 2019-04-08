struct Student{
	char name[20];
	int mark;
	int classpoint;
	char leader;
	char west;
	int paper;
	int money;
};
void main(){
	int i,n,maxnum,tot=0;
	struct Student stu[100]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{scanf("%s %d %d %c %c %d",stu[i].name,&stu[i].mark,&stu[i].classpoint,&stu[i].leader,&stu[i].west,&stu[i].paper);
	}
	for(i=0;i<n;i++)
	{if(stu[i].mark>80&&stu[i].paper>0) stu[i].money=stu[i].money+8000;
	if(stu[i].mark>85&&stu[i].classpoint>80) stu[i].money=stu[i].money+4000;
	if(stu[i].mark>90) stu[i].money=stu[i].money+2000;
	if(stu[i].mark>85&&(stu[i].west=='Y')) stu[i].money=stu[i].money+1000;
	if(   stu[i].leader=='Y'&&(stu[i].classpoint>80) )stu[i].money=stu[i].money+850;
	}
	maxnum=0;
    for(i=1;i<n;i++)
		if(stu[maxnum].money<stu[i].money) maxnum=i;
	for(i=0;i<n;i++)
		tot=tot+stu[i].money;
	printf("%s\n%d\n%d",stu[maxnum].name,stu[maxnum].money,tot);
}
