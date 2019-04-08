struct score 
{
 long num;
 int yu;
 int shu;
 int sum;
 }stu[100000];
void main()
{
  long  i,n,j,k;
   int t;
  scanf("%ld",&n);
 for(i=0;i<n;i++)
 {
   scanf("%ld%d%d",&stu[i].num,&stu[i].yu,&stu[i].shu);
   stu[i].sum=stu[i].yu+stu[i].shu;
 }  
 for(i=0;i<3;i++)
{
  for(j=0;j<n-i-1;j++)
    if(stu[j].sum>stu[j+1].sum)
       {
         t=stu[j].sum;
         stu[j].sum=stu[j+1].sum;
         stu[j+1].sum=t;
        }
 }
for(k=n-1;k>n-4;k--)
{
  if(k!=n-1&&stu[k].sum==stu[k+1].sum)continue; 
    for(i=0;i<n;i++)	 
   {
	   if(stu[k].sum==(stu[i].yu+stu[i].shu))
        { printf("%ld %ld\n",stu[i].num,stu[k].sum);
       if(k==n-3)break;}
   }
}
 }

