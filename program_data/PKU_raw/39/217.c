struct student
{
 char name[20];
 int score;
 int ping;
 char gan;
 char xi;
 int lun;
 int jiang;
 }stu[100];

int main()
{
 int n,i,t,h=0;scanf("%d",&n);
 for(i=0;i<n;i++)
    {
         scanf("%s %d %d %c %c %d",&stu[i].name,&stu[i].score,
		&stu[i].ping,&stu[i].gan,&stu[i].xi,&stu[i].lun);
	stu[i].jiang=0;
if(stu[i].score>80&&stu[i].lun>0)stu[i].jiang=stu[i].jiang+8000;
if(stu[i].score>85&&stu[i].ping>80)stu[i].jiang=stu[i].jiang+4000;
if(stu[i].score>90)stu[i].jiang=stu[i].jiang+2000;
if(stu[i].score>85&&stu[i].xi=='Y')stu[i].jiang=stu[i].jiang+1000;
if(stu[i].ping>80&&stu[i].gan=='Y')stu[i].jiang=stu[i].jiang+850;
}for(i=0,t=stu[0].jiang;i<n-1;i++)
{h=h+stu[i].jiang;if(stu[i+1].jiang>t)t=stu[i+1].jiang;}
for(i=0;i<n;i++)
if(stu[i].jiang==t){printf("%s\n%d\n%d",stu[i].name,t,h+stu[n-1].jiang);break;}
return 0;

}
