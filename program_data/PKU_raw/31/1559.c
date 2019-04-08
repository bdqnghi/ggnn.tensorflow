 
struct student
{
    char con[50];
    struct student *next;
};
int n;
 
struct student *creat(void)
{
    struct student *head,*p,*q;
    n=0;
    p=q=(struct student *)malloc(len);
	gets(p->con);
    head=null;
    while(strcmp(p->con,"end")!=0)
    {
        //scanf("%s %c %d %d %s",p->name,&p->gender,&p->age,&p->score,p->add);
        n++;
        if(n==1)head=p,p->next=null;
        else head=p,p->next=q;
        q=p;
        p=(struct student *)malloc(len);
		gets(p->con);
    }
    return(head);
}
 
void print(struct student *head)
{
    struct student *p;
    p=head;
    int i;
    for(i=0;i<n;i++)
    {
		printf("%s\n",p->con);
        p=p->next;
    }
}
 
void main()
{
    struct student *head;
    head=creat();
    print(head);
}