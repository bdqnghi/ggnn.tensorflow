void main()
{

struct student
{
	char name[20];
	int final;
	int classes;
    char duty;
	char west;
	int text;
};
struct student stu[100];
int n,i,t;
scanf("%d",&n);
int num[100]={0},all=0,a[100];
for(i=0;i<n;i++)
   scanf("%s %d %d %c %c %d",stu[i].name,&stu[i].final,&stu[i].classes,&stu[i].duty,&stu[i].west,&stu[i].text);

for(i=0;i<n;i++)
{
	 if(stu[i].text>0&&stu[i].final>80)
		 num[i]=num[i]+8000;
	 if(stu[i].classes>80&&stu[i].final>85)
		 num[i]=num[i]+4000;
	 if(stu[i].final>90)
		 num[i]=num[i]+2000;
	 if(stu[i].west=='Y'&&stu[i].final>85)
		 num[i]=num[i]+1000;
	 if(stu[i].classes>80&&stu[i].duty=='Y')
		 num[i]=num[i]+850;
}
for(i=0;i<n;i++)
{
	a[i]=num[i];
	all=all+num[i];
}
for(i=0;i<n-1;i++)
{	
	if(a[i]>a[i+1])
		a[i+1]=a[i];
}
for(i=0;i<n;i++)
{
	if(num[i]==a[n-1])
	{t=i;
	break;}
}
printf("%s\n%d\n%d\n",stu[t].name,num[t],all);
}