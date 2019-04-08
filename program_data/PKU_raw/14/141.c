struct student
{
long num;
int chi;
int math;
int add;
};
struct student stu[100000];
void main()
{
int m,k,n,i,j;
scanf("%d",&n);
for(i=0;i<n;i++)
 {
 scanf("%ld %d %d",&stu[i].num,&stu[i].chi,&stu[i].math);
 stu[i].add=stu[i].chi+stu[i].math;
 }
for(j=0;j<3;j++)
 for(i=n-1;i>0;i--)
 {
 if(stu[i].add>stu[i-1].add)
 {	
 k=stu[i].add;stu[i].add=stu[i-1].add;stu[i-1].add=k;
 m=stu[i].num;stu[i].num=stu[i-1].num;stu[i-1].num=m;
 }
 }
for(i=0;i<3;i++)
printf("%ld %d\n",stu[i].num,stu[i].add);
}

