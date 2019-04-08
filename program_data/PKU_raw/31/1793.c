 
struct student
{
    char num[16];
    char a[64];
    struct student *next;
};
int n;
 
struct student *creat(void)
{
    struct student *head,*p,*q;
    n=0;
    p=q=(struct student *)malloc(len);
    scanf("%s",p->num);
    head=null;
    while(strcmp(p->num,"end")!=0)
    {
        gets(p->a);
        n++;
        if(n==1)head=p,p->next=null;
        else head=p,p->next=q;
        q=p;
        p=(struct student *)malloc(len);
        scanf("%s",p->num);
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
        printf("%s",p->num);
        puts(p->a);
        p=p->next;
    }
}
 
void main()
{
    struct student *head;
    head=creat();
    print(head);
}