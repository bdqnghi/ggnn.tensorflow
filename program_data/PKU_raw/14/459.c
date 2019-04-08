int main()
{
   struct student
   {
       int ID,Chinese,math,sum;
   }
   stu[100000],temp1,temp2,temp3;
   int n,i,j,k;
   scanf("%d\n",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d%d%d",&stu[i].ID,&stu[i].Chinese,&stu[i].math);
       stu[i].sum=stu[i].Chinese+stu[i].math;
   }
   temp1=stu[0];
   for(i=1;i<n-1;i++)
   if(stu[i].sum>temp1.sum)
   temp1=stu[i];
   printf("%d %d\n",temp1.ID,temp1.sum);
   if(temp1.ID==stu[0].ID) temp2=stu[1];
   else temp2=stu[0];
   for(i=1;i<n-1;i++)
   {if(stu[i].ID==temp1.ID) continue;
    else if(stu[i].sum>temp2.sum) temp2=stu[i];}
    printf("%d %d\n",temp2.ID,temp2.sum);
    for(i=0;i<n;i++)
    if(stu[i].ID==temp1.ID||stu[i].ID==temp2.ID)
    stu[i].sum=0;
    temp3=stu[0];
    for(i=1;i<n-1;i++)
   if(stu[i].sum>temp3.sum)
   temp3=stu[i];
   printf("%d %d\n",temp3.ID,temp3.sum);
   return 0;
}
