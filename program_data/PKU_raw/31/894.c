 struct student
 {
        char all[100];
        
        struct student *next;
        };
        
 main()
 {
       int k;
       int a=0;
       struct student *p;
       struct student *head;
       struct student *p1,*p2;
       p1=p2=(struct student *)malloc(n);
       head=NULL;
       k=0;
       for(k=0;;k++)
       {
       gets(p1->all);
       a++;
       if((p1->all)[0]!='e')
               {
                             if(a==1)
                              p1->next=NULL;
                                   else
                                   p1->next=p2;
                                   p2=p1;
                                   p1=(struct student *)malloc(n);
                             }
                             
                            else 
                             {
                                 head=p2;
                                 break;
                                 }
                                 }
                                 p=head;
                                 while(p!=NULL)
                                 {
                                               puts(p->all);
                                               p=p->next;
                                               }
                                      
                                       }
                                               
       