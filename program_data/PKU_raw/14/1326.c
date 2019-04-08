int main()
{
struct student{
int num;
int yw;
int sx;
int all;
}student[4]={0,0,0,0};
struct student temp={0,0,0,0};
int i, l,n;
scanf("%d",&n);

for(i=0;i<n;i++)
{
scanf("%d%d%d",&student[3].num,&student[3].yw,&student[3].sx);
student[3].all=student[3].yw+student[3].sx;

if(student[2].all<student[3].all)
{
temp=student[2];
student[2]=student[3];
student[3]=temp;
}
if(student[1].all<student[2].all)
{
temp=student[1];
student[1]=student[2];
student[2]=temp;
}
if(student[0].all<student[1].all)
{
temp=student[0];
student[0]=student[1];
student[1]=temp;
}
}
for(l=0;l<3;l++)
{
printf("%d %d\n",student[l].num,student[l].all);
}
}