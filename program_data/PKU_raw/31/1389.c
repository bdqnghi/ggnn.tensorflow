struct shuju
{
    char xh[20];
    char xm[20];
    char sex;
    int age;
   char fen[10];
    char dorm[20];
    struct shuju * next;
};

struct shuju *create()
{
    
    struct shuju *head,*p1,*p2;
    p1=(struct shuju* )malloc(len);
    scanf("%s %s %c %d %s %s",p1->xh,p1->xm,&p1->sex,&p1->age,p1->fen,p1->dorm);
    p1->next=NULL;
    while (1)
    { 

    	p2=p1;
        p1=(struct shuju* )malloc(len); 
        scanf("%s",p1->xh);
        if (strcmp(p1->xh,"end")==0) {free(p1);break;}
        else
        {scanf("%s %c %d %s %s",p1->xm,&p1->sex,&p1->age,p1->fen,p1->dorm);
        p1->next=p2;}
    }
    head=p2;
    return (head);
}

void print(struct shuju* head)
{

    struct shuju* p;
    p=head;
    while (p->next!=NULL)
    {
        printf("%s %s %c %d %s %s\n",p->xh,p->xm,p->sex,p->age,p->fen,p->dorm);
       p=p->next;}
     printf("%s %s %c %d %s %s\n",p->xh,p->xm,p->sex,p->age,p->fen,p->dorm);
}

void main()
{
    
    
    struct shuju *p;
    p=create();
    print(p);
}