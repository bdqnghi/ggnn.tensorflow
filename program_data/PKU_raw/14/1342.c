
struct student
    {
           int num,chi,mat,tot;           
    }stu[100000];

int main()
{
    void max(struct student [],int n);
    int n,i,k;

    
    
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
     scanf("%d%d%d",&stu[i].num,&stu[i].chi,&stu[i].mat);
     stu[i].tot=stu[i].chi+stu[i].mat;
    }
                                     
                                        
                                                                               
   
    for(k=0;k<3;k++)
    {
                    max(stu,n);
                    if(k<2)
                    printf("\n");
                   
    }
}

void max(struct student stu[],int n)
{
     int i,j,max;
     max=stu[0].tot;
     for(i=0;i<n;i++)
      if(stu[i].tot>max)
       {
        max=stu[i].tot;
        j=i;
        }

     printf("%d %d",stu[j].num,max);
     stu[j].tot=-1;
}
