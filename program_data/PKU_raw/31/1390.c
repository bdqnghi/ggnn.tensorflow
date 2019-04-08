
int i=0;

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
    head=p1;
    while (1)
    { 
    	i++;
    	p2=p1;
        p1=(struct shuju* )malloc(len); 
        scanf("%s",p1->xh);
        if (strcmp(p1->xh,"end")==0) {free(p1);break;}
        else
        {scanf("%s %c %d %s %s",p1->xm,&p1->sex,&p1->age,p1->fen,p1->dorm);
        p2->next=p1;}
    }
    p2->next=NULL;
    return (head);
}

/*struct shuju*create()
{
    struct shuju *head,*p1,*p2;
    p1=(struct shuju *)malloc(len);
    scanf("%s",p1->xh);
    if (strcmp(p1->xh,"end")!=0){
    scanf("%s %c %d %d %s",p1->xm,&p1->sex,&p1->age,&p1->fen,p1->dorm);
    p1->next=NULL;
    head=p1;
    p2=p1;
    do
    {
    	i++;
    	p1=(struct shuju* )malloc(len);
    	scanf("%s",p1->xh);
    	if (strcmp(p1->xh,"end")==0)
    	{
    	    free(p1);break;
    	}
    	else
    	{
    		scanf("%s %c %d %d %s",p1->xm,&p1->sex,&p1->age,&p1->fen,p1->dorm);
    		p1->next=NULL;
    		p2->next=p1;
    		p2=p1;
    	}
    }
    while(1);}
    else{head=NULL;}
    return(head);
}*/

void print(struct shuju* head)
{
    int j;
    struct shuju* p,*pre;
    
    for (j=0;j<i;j++)
    {
    	p=head;
    pre=p;
    	while (p->next!=NULL)
    {
        pre=p;
        p=p->next;
    }
    printf("%s %s %c %d %s %s\n",p->xh,p->xm,p->sex,p->age,p->fen,p->dorm);
   
    pre->next=NULL;}
}

void main()
{
    
    
    struct shuju *p;
    p=create();
    
    print(p);
}