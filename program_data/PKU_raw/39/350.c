
struct student
{char name[20];
int test;
int judge;
char leader;
char west;
int paper;
};struct student stu[100];

void main()
{int m=0,n,i;
long sum,t=0,a[100]={0};
scanf("%d",&n);
for(i=0;i<n;i++)
{scanf("%s %d %d %c %c %d",&stu[i].name,&stu[i].test,&stu[i].judge,&stu[i].leader,&stu[i].west,&stu[i].paper);
}
for(sum=0,i=0;i<n;i++)
 {if(stu[i].test>80&&stu[i].paper>0) {a[i]=a[i]+8000;}
  if(stu[i].test>85&&stu[i].judge>80) {a[i]=a[i]+4000;}
  if(stu[i].test>90) {a[i]=a[i]+2000;}
  if(stu[i].test>85&&(stu[i].west=='Y')) {a[i]=a[i]+1000;}
  if(stu[i].judge>80&&(stu[i].leader=='Y') ) {a[i]=a[i]+850;}
 sum=sum+a[i];
 if(a[i]>t) {t=a[i];m=i;}
 }
printf("%s\n",stu[m].name);
printf("%ld\n",t);
printf("%ld\n",sum); 
}