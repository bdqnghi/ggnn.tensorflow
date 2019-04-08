int main()
{
    int n;
    int i;
    scanf("%d", &n);
    struct student
    {
           char name[1000];
           int final;
           int clas;
           char ganbu;
           char west;
           int paper;
    }stu[1000];
    
    for(i=1;i<=n;i++)
    {
                    scanf("%s %d %d %c %c %d", stu[i].name, &stu[i].final, &stu[i].clas, &stu[i].ganbu, &stu[i].west, &stu[i].paper);
    }
    int total[1000]={0};
    for(i=1;i<=n;i++)
    {
                     if(stu[i].final>80&&stu[i].paper>=1)
                     {
                                                         total[i]=total[i]+8000;
                     }
                     if(stu[i].final>85&&stu[i].clas>80)
                     {
                                                        total[i]=total[i]+4000;
                     }
                     if(stu[i].final>90)
                     {
                                                         total[i]=total[i]+2000;
                     }
                     if(stu[i].final>85&&stu[i].west=='Y')
                     {
                                                          total[i]=total[i]+1000;
                     }
                     if(stu[i].clas>80&&stu[i].ganbu=='Y')
                     {
                                                          total[i]=total[i]+850;
                     }
                 
    }
    
    int max=total[1];
    int sum=total[1];
    int k;
    for(i=2;i<=n;i++)
    {
                     sum=sum+total[i];
                     if(total[i]>max)
                     {
                                     max=total[i];
                     }
    }
    for(i=1;i<=n;i++)
    {
                     if(total[i]==max)
                     {
                                      printf("%s\n", stu[i].name);
                                      break;
                     }
    }
    printf("%d\n", max);
    printf("%d", sum);
    
    
   
    return 0;
}
