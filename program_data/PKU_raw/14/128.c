
void main()
{
     struct student
    {
       int ID;
       int math;
       int chinese;
       int sum;
    };
     int n,i,t,j;
     scanf("%d",&n);
     struct student stu[n];
     for(i=0;i<n;i++)
        scanf("%d %d %d",&stu[i].ID,&stu[i].math,&stu[i].chinese);
     for(i=0;i<n;i++)
        stu[i].sum=stu[i].math+stu[i].chinese;
     for(i=0;i<3;i++)
     {  for(j=i+1;j<n;j++)
          
           if(stu[j].sum>stu[i].sum)
           {t=stu[i].sum;stu[i].sum=stu[j].sum;stu[j].sum=t;
            t=stu[i].ID;stu[i].ID=stu[j].ID;stu[j].ID=t;}
           
       }
     for(i=0;i<3;i++)
     printf("%d %d\n",stu[i].ID,stu[i].sum);
  
}
