struct student
{
       char num[10];
       int grade[2];
};
struct student stu[100000];
int main()
{
    int n,sum[100000],i,count,max,j;
    count = 1;
    
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
      sum[i]=0;
      scanf("%s %d %d",stu[i].num,&stu[i].grade[0],&stu[i].grade[1]);
      sum[i]= stu[i].grade[0]+stu[i].grade[1];
    }
    while(count <=2)
    { 
      max =0;
      for(i=0;i<n;i++)
      {
        if(sum[i]>max)
       {
        max = sum [i];
        j=i;
       }
      }
      printf("%s %d\n",stu[j].num,sum[j]);
      count++;
      sum[j]=0;
    }
    max = 0;
    for(i=0;i<n;i++)
      {
        if(sum[i]>max)
       {
        max = sum [i];
        j=i;
       }
      }
      printf("%s %d",stu[j].num,sum[j]);
    getchar();
    getchar();
} 
