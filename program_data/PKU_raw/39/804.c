struct student
{
	char name[20];
	int final;
	int classgrade;
	char leader;
	char west;
    int essay;
	int total;
};
int main()
{
struct student stu[100];
struct student m;
int n,i,a,b,c,d,e,TOTAL;
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%s %d %d %c %c %d",stu[i].name,&stu[i].final,&stu[i].classgrade,&stu[i].leader,&stu[i].west,&stu[i].essay);
}
TOTAL=0;
for(i=0;i<n;i++){
a=0;b=0;c=0;d=0;e=0;
if(stu[i].final>80&&stu[i].essay>=1)
a=8000;
if(stu[i].final>85&&stu[i].classgrade>80)
b=4000;
if(stu[i].final>90)
c=2000;
if(stu[i].final>85&&stu[i].west=='Y')
d=1000;
if(stu[i].classgrade>80&&stu[i].leader=='Y')
e=850;
stu[i].total=a+b+c+d+e;
TOTAL=TOTAL+stu[i].total;
}
for(i=n-1;i>=0;i--){
if(stu[i-1].total<stu[i].total)
{
m=stu[i-1];
stu[i-1]=stu[i];
stu[i]=m;
}
}
printf("%s\n%d\n%d",stu[0].name,stu[0].total,TOTAL);
return 0;
}