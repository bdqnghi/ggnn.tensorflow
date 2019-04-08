int main()
{
    struct  pa
    {
            char ID[11];
            int age;
            struct pa *next;
    }*head,*p1,*p2,*p3,*p4;
    int tage;
    char tID[11];
    int n,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
                    p1=(struct pa*)malloc(sizeof(struct pa));
                    if(i==0)
                    head=p1;
                    scanf("%s %d",p1->ID,&p1->age);
                    if(i!=0)
                    p2->next=p1;
                    p2=p1;
    }
    p1->next=NULL;
    p1=head;
    p2=p1->next; 
    for(i=0;i<n;i++)//?? 
    {
                    p3=p1;
                    p4=p2;
                    for(j=0;j<n-1;j++)
                    {
                              if(p3->age<p4->age && p4->age>=60)
                              {
                                                 strcpy(tID,p3->ID);
                                                 tage=p3->age;
                                                 strcpy(p3->ID,p4->ID);
                                                 p3->age=p4->age;
                                                 strcpy(p4->ID,tID);
                                                 p4->age=tage;                                                             
                              }
                              p3=p3->next;
                              p4=p4->next;
                    }
    }
    p1=head;
    while(p1!=NULL)
    {
                   printf("%s\n",p1->ID);
                   p1=p1->next;
    }        
    return 0;
} 