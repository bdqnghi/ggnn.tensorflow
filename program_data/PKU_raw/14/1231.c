struct student
{
int id;
int ch;
int math;
};
void main()
{
struct student stu[100000];
int n,i,j,sum=0,id1=0,flag=0;
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d %d %d",&stu[i].id,&stu[i].ch,&stu[i].math);
for(i=0;i<3;i++)
{
for(j=0;j<n;j++)
{
if((stu[j].ch+stu[j].math)>sum)
{sum=stu[j].ch+stu[j].math;
id1=stu[j].id;
flag=j;}
}
printf("%d %d\n",id1,sum);
sum=0;
id1=0;
stu[flag].ch=0;
stu[flag].math=0;
flag=0;
}
}

