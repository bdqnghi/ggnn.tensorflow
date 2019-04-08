struct patient
{
    int age;
    char id[10];
    struct patient *next;
};

main()
{
    int n,i,j,a=0,b=0;
    struct patient *p1,*p2,*head1=NULL,*head2=NULL,*q1,*q2,*temp,*last;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        p1=(struct patient*)malloc(LEN);
        scanf("%s %d",p1->id,&p1->age);
        q1=p1;
             if(p1->age>=60)
             {
               if(head1==NULL){head1=p1;p2=p1;p1->next=NULL;}
               else
               {
                 a=a+1;
                 temp=head1;last=head1;
                 for(j=0;j<a;j++)
                 {
                    if(p1->age>temp->age)
                    {
                      if(j==0){p1->next=head1;head1=p1;break;}
                      else{last->next=p1;p1->next=temp;break;}
                    }
                  last=temp;temp=temp->next;
                 }
                 if(j==a){last->next=p1;p1->next=NULL;}
               }
             }
             if(p1->age<60)
             {
               if(head2==NULL){head2=q1;q2=q1;q1->next=NULL;}
               else{b=b+1;q1->next=NULL;q2->next=q1;q2=q1;}
             }
    }
    p1=head1;q1=head2;
    for(i=0;i<=a;i++){printf("%s\n",p1->id);p1=p1->next;}
    for(i=0;i<=b;i++){printf("%s\n",q1->id);q1=q1->next;}
}
