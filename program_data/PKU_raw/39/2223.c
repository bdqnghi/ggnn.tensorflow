struct stu
{
char name[20];
int grade,point;
char job;
char home;
int paper,sum;
}student[100];

void main()
{
int n,i;
scanf("%d\n",&n);
for(i=0;i<n;i++)
{
student[i].sum=0;
}
for(i=0;i<n;i++)
{
 scanf("%s %d %d %c %c %d",student[i].name,&student[i].grade,&student[i].point,&student[i].job,&student[i].home,&student[i].paper);
 if(student[i].grade>80&&student[i].paper>0)
      student[i].sum+=8000;
 if(student[i].grade>85&&student[i].point>80)
      student[i].sum+=4000;
 if(student[i].grade>90)
      student[i].sum+=2000;
 if(student[i].grade>85&&student[i].home=='Y')
      student[i].sum+=1000;
 if(student[i].point>80&&student[i].job=='Y')
      student[i].sum+=850;
}
int max;
max=student[0].sum;
for(i=0;i<n;i++)
{
 if(student[i].sum>max)
 max=student[i].sum;
}
for(i=0;i<n;i++)
{ 
if(max==student[i].sum)
{
printf("%s\n%d\n",student[i].name,student[i].sum);
break;
}
}
int SUM=0;
for(i=0;i<n;i++)
{
 SUM+=student[i].sum;
}
printf("%d",SUM);
}