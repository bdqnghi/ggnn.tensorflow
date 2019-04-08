struct a
{
    char s[6][100];
    struct a *next;
}head;
int tot=0;

void init()
{
    int i;
    struct a *p;
    head.next=NULL;
    while(1)
    {
        p=(struct a *)malloc(sizeof(struct a));
        scanf("%s",p->s[0]);
        if(!strcmp(p->s[0],"end"))  break;
        for(i=1;i<6;i++)
        {
            scanf("%s",p->s[i]);
        }
        p->next=head.next;
        head.next=p;
    }
}

void print()
{
    struct a *p=head.next;
    int i;
    while(p)
    {
        for(i=0;i<5;i++)
        {
            printf("%s ",p->s[i]);
        }
        puts(p->s[i]);
        p=p->next;
    }
}

int main()
{
    init();
    print();
    return 0;
}
