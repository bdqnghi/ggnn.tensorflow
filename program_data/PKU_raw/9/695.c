void main()
{
     struct patient
     {
            char ID[16];
            int age;
            int index;
     };
     int n,i,j,t,t1;
     char str[16];
     scanf("%d",&n);
     struct patient pat[n];
     for(i=0;i<n;i++)
       {scanf("%s %d",pat[i].ID,&pat[i].age);
       pat[i].index=i;}
     for(i=0;i<n;i++)
     {    for(j=i+1;j<n;j++)
          {    
               if(pat[j].age>=60&&pat[j].age>pat[i].age)      
               {strcpy(str,pat[i].ID);
               strcpy(pat[i].ID,pat[j].ID);
               strcpy(pat[j].ID,str);
               t=pat[i].age;
               pat[i].age=pat[j].age;
               pat[j].age=t;
               t1=pat[i].index;
               pat[i].index=pat[j].index;
               pat[j].index=t1;}
               if(pat[i].age>=60&&pat[i].age==pat[j].age)
               {
                        if(pat[i].index>pat[j].index)
                        {strcpy(str,pat[i].ID);
               strcpy(pat[i].ID,pat[j].ID);
               strcpy(pat[j].ID,str);
               t=pat[i].age;
               pat[i].age=pat[j].age;
               pat[j].age=t;
               t1=pat[i].index;
               pat[i].index=pat[j].index;
               pat[j].index=t1;}
               }
               
          }
     }
     for(i=0;i<n;i++)
     {
                     for(j=i+1;j<n;j++)
                       if(pat[i].age<60&&pat[i].index>pat[j].index)
                     {strcpy(str,pat[i].ID);
                       strcpy(pat[i].ID,pat[j].ID);
                          strcpy(pat[j].ID,str);
                        t=pat[i].age;
                          pat[i].age=pat[j].age;
                        pat[j].age=t;
                           t1=pat[i].index;
                           pat[i].index=pat[j].index;
                             pat[j].index=t1;}
     }
     for(i=0;i<n;i++)
     
                     
                  puts(pat[i].ID);
               
           
}
