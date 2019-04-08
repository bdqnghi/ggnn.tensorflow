struct shuju
{
    char str[100];
    struct shuju * next;
};

struct shuju *create()
{
    
    struct shuju *head,*p1,*p2;
    p1=(struct shuju* )malloc(len);
    gets(p1->str);
    p1->next=NULL;
    while (1)
    { 

    	p2=p1;
        p1=(struct shuju* )malloc(len); 
        gets(p1->str);
        if(strcmp(p1->str,"end")==0) {free(p1);break;}
        p1->next=p2;
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
        puts(p->str);
       p=p->next;}
    puts(p->str);
}

void main()
{
    
    
    struct shuju *p;
    p=create();
    print(p);
}