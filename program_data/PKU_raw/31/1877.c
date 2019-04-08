struct student
{
    char data[500];
    struct student *former;
};
int n;
struct student *create()
{
    struct student *tail;
    struct student *p1,*p2;
    n=0;
    p1=p2=(struct student *)malloc(sizeof(struct student));
    gets(p1->data);
    tail=NULL;
    while(strcmp(p1->data,"end")!=0)
    {
        n=n+1;
        if (n==1)
        {
            tail=p1;
            p1->former=NULL;
        }
        else
        {
            tail=p1;
            p1->former=p2;
            p2=p1;
        }
        p1=(struct student *)malloc(sizeof (struct student));
        gets(p1->data);
    }


    return(tail);
}
int main()
{

    struct student *p,*start;
    p=create();
    start=p;
    if (p!=NULL)
    {
        do
        {
            puts(start->data);
            start=start->former;
        }
        while (start!=NULL);
    }
}

