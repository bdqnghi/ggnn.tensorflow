 int main()   
  {   
    int sum,test,i,last,j;   
    int mon[300];
    int num=0,count=0;   
    for(j=1; ;j++)
 {num=0;count=0;
 scanf("%d%d",&sum,&test);   
 if (sum==0&&test==0) break;
 for(i=0;i<sum;i++)   
        mon[i]=i+1;   
    while(num<sum)   
   {   for(i=0;i<sum;i++)   
   {   if(mon[i]!=0)   
                      {   count=count+1;   
                          if(count==test)   
                              {   num=num+1;   
                                  if(num==sum)   
                                  last=mon[i];   
                                  mon[i]=0;   
                                  count=0;   
                              }   
                      }   
 }
 }
   printf("%d\n",last);   
 }          
  return 0;
 } 