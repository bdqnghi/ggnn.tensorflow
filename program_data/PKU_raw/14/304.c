 int main()
{
   struct gpa
    {
     int num;
     int math;
     int chin;
     int total;           
    } 
    STUDENT_NUM[100000], first,second,third;
  
  int num,math,chin;
  long n,i;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    scanf("%d",&num);
    scanf("%d",&math);                                 
    scanf("%d",&chin);
    STUDENT_NUM[i].num=num;
    STUDENT_NUM[i].math=math;
    STUDENT_NUM[i].chin=chin;
    STUDENT_NUM[i].total=math+chin;                                 
  }
   
    first.num=0;
    first.total=0;
    second.num=0;
    second.total=0;
    third.num=0;
    third.total=0;
    
   
    for(i=1;i<=n;i++)
    {
           if(STUDENT_NUM[i].total>first.total)
           {
           first.num=STUDENT_NUM[i].num;
           first.total=STUDENT_NUM[i].total;                       
           }                           
    }
    
          for(i=1;i<=n;i++)
            {
               if(STUDENT_NUM[i].num==first.num)
               {STUDENT_NUM[i].total=0;}              
            }
    for(i=1;i<=n;i++)
    {
        if(STUDENT_NUM[i].total>second.total)
        {
           second.num=STUDENT_NUM[i].num;
           second.total=STUDENT_NUM[i].total;                                                  
        }             
    }
               
            for(i=1;i<=n;i++)
            {
                if (STUDENT_NUM[i].num==second.num)
                {STUDENT_NUM[i].total=0;}             
            }
    for(i=1;i<=n;i++)
    {
       if(STUDENT_NUM[i].total>third.total)
       {
           third.num=STUDENT_NUM[i].num;
           third.total=STUDENT_NUM[i].total;                                                                      
       }              
    }
    
    
   printf("%d %d\n",first.num,first.total);
   printf("%d %d\n",second.num,second.total);
   printf("%d %d\n",third.num,third.total);
    getchar();
    getchar();
    getchar();
    getchar();        
}
