struct student
{
    long int id;
    int yuwen;
    int shuxue;
    int total;
    struct student *next;
};
long int n;

int main()
{
    struct student *p0,*p1,*p2,*head,*p;
    int i;
    scanf ("%ld\n",&n);
    p0=(struct student *)malloc(sizeof(struct student));
    scanf ("%ld %d %d",&p0->id,&p0->yuwen,&p0->shuxue);
    p0->total=p0->yuwen+p0->shuxue;
    head=p0;p1=p0;
    p0=(struct student *)malloc(sizeof(struct student));
    scanf ("%ld %d %d",&p0->id,&p0->yuwen,&p0->shuxue);
    p0->total=p0->yuwen+p0->shuxue;
    if (p0->total<=p1->total)
    {
        p1->next=p0;
        p1=p0;
    }
    else
    {
        head=p0;
        p0->next=p1;
    }
    p0=(struct student *)malloc(sizeof(struct student));
    scanf ("%ld %d %d",&p0->id,&p0->yuwen,&p0->shuxue);
    p0->total=p0->yuwen+p0->shuxue;
    if (p0->total<=p1->total)
    {
        p1->next=p0;
        p2=p0;
    }
    else if (p0->total>p1->total&&p0->total<=head->total)
    {
        head->next=p0;
        p0->next=p1;
        p2=p1;
        p1=p0;
    }
    else if (p0->total>head->total)
    {
        p0->next=head;
        p2=p1;p1=head;head=p0;
    }
    p2->next=NULL;
    for (i=3;i<n;i++)
    {
        p0=(struct student *)malloc(sizeof(struct student));
        scanf ("%ld %d %d",&p0->id,&p0->yuwen,&p0->shuxue);
        p0->total=p0->yuwen+p0->shuxue;
        if (p0->total>p2->total)
        {
            if(p0->total<=p1->total)
            {
                p1->next=p0;
                p0->next=NULL;
                p2=p0;
            }
            else if (p0->total>p1->total&&p0->total<=head->total)
            {
                head->next=p0;
                p0->next=p1;
                p1->next=NULL;
                p1=p2;p0=p1;
            }
            else if (p0->total>head->total)
            {
                p0->next=head;
                p1->next=NULL;
                p2=p1;p1=head;head=p0;
            }
        }
    }
    p=head;
    for (i=0;i<3;i++)
    {
        printf("%ld %d\n",p->id,p->total);
        p=p->next;
    }
}

