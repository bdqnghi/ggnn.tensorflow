int n=0;
struct student
{
    char s[200];
    struct student *next;
};
struct student *creat()
{
    char k[200];
    struct student *p,*head;
    head=p=(struct student *)malloc(LEN);
    while(1)
    {
        gets(k);
        if(!(strcmp(k,"end")))
        break;
        else
        {
            if(n==0)
            {head->next=NULL;n=1;}
            else
            p->next=head;
            head=p;
            strcpy(p->s,k);
            p=(struct student *)malloc(LEN);
        }
    }
    free(p);
    return (head);
}
void print(struct student *p)
{
    if(p!=NULL)
    {
        puts(p->s);
        print(p->next);
    }
}
int main()
{
    struct student *head;
    head=creat();
    print(head);
    return 0;
}
