int n,i;
struct man
{
 char num[10];
 int age;
 int nu;
}stu[100];
int f(char *a,int b,int n1,char *c,int d,int n2)
{int sum;
 if(b>=60&&d>=60)
 {if(b>d)
 sum=1;
 else if(b<d)
  sum=-1;
 else
  sum=n2-n1;
 }
 else if(b>=60&&d<60)
  sum=1;
    else if(b<60&&d>=60)
        sum=-1;
 else
        sum=n2-n1;
 return(sum);
}
void main()
{scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%s %d",stu[i].num,&stu[i].age);
stu[i].nu=i+1;}
int j,k;
struct man t;
for(i=0;i<n-1;i++)
{k=i;
for(j=i+1;j<n;j++)
if(f(stu[i].num,stu[i].age,stu[i].nu,stu[j].num,stu[j].age,stu[j].nu)<0)
{k=j;
t=stu[i];stu[i]=stu[k];stu[k]=t;}
}
for(i=0;i<n;i++)
printf("%s\n",stu[i].num);
} 