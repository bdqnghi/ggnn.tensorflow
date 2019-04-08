void main()
{
    struct stu
    {
        char num[100];
        char nam[100];
        char sex;
        int age;
        float sco;
        char add[100];
        struct stu *next;
    };
    int len=1,i;
    struct stu *p1,*p2,*head,*new,*newhead;
    p1=p2=head=(struct stu *) malloc(sizeof(struct stu));
    scanf("%s",p1->num);
    while(strcmp(p1->num,"end")!=0)
    {
        scanf("%s %c%d%f%s",p1->nam,&p1->sex,&p1->age,&p1->sco,p1->add);
        p1=(struct stu *) malloc(sizeof(struct stu));
        scanf("%s",p1->num);
        if(strcmp(p1->num,"end")==0) p2->next=NULL;
        else
        {
            p2->next=p1;
            p2=p1;
            len++;
        }
    }
    p1=head;
    for(i=0;i<len;i++)
    {
        p2=p1=head;
        while(p1->next!=NULL)
        {
            p2=p1;
            p1=p1->next;
        }
        if(i==0)
            newhead=new=p1;
        else
            new=new->next=p1;
        p2->next=NULL;
    }
    p1=newhead;
    for(i=0;i<len;i++)
    {
        printf("%s %s %c %d %g %s\n",p1->num,p1->nam,p1->sex,p1->age,p1->sco,p1->add);
        p1=p1->next;
    }
}
