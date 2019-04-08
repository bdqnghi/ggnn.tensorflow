int main()
{
struct stu
    {
    int num;
    int ch;
    int ma;
    int to;       
    }; 
    int i,j1,j2,j3,k,max;
    struct stu student[100000]={0};
    struct stu temp;
    scanf("%d",&k);
    for(i=0;i<=k-1;i++)
    {
    scanf("%d%d%d",&student[i].num,&student[i].ch,&student[i].ma); 
    student[i].to=student[i].ch+student[i].ma;
    }
    max=0;
    for(i=0;i<=k-1;i++)
    {
                      if(student[i].to>max)
                      {
                            max=student[i].to;
                            j1=i;               
                      }
    }
     printf("%d ",student[j1].num);
     printf("%d\n",student[j1].to);
    max=0;
    for(i=0;i<=k-1;i++)
    {
                      if(i==j1) continue;
                      if(student[i].to>max)
                      {
                            max=student[i].to;
                            j2=i;               
                      }
    }
     printf("%d ",student[j2].num);
     printf("%d\n",student[j2].to);max=0;
    max=0;
    for(i=0;i<=k-1;i++)
    {
                      if(i==j1||i==j2) continue;
                      if(student[i].to>max)
                      {
                            max=student[i].to;
                            j3=i;               
                      }
    }
     printf("%d ",student[j3].num);
     printf("%d\n",student[j3].to);
return 0;
}