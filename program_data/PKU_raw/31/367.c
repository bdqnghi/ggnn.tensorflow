struct Student
{
    char stu[500];
    struct Student * next;
};

int n=0;
void main()
{
    struct Student * creat();
    void print(struct Student *head,int num);
    struct Student *head;
    head=creat();
    int i=0;
    for(i=n;i>0;i--)
        print(head,i);
}

struct Student * creat()
{
    struct Student *p1,*p2;
    struct Student *head;
    head=NULL;
    p1=p2=(struct Student *)malloc(LEN);
    gets(p1->stu);
    while(strcmp(p1->stu,"end")!=0)
    {
        n=n+1;
        if(n==1)
        {
            head=p1;
        }
        else
        {
            p2->next=p1;
        }
        p2=p1;
        p1=(struct Student *)malloc(LEN);
        gets(p1->stu);
    }
    p2->next=NULL;
    return(head);
}

void print(struct Student *head,int num)
{
    struct Student *p;
    p=head;
    int count=1;
    while(count<num)
    {
        p=p->next;
        count+=1;
    }
    printf("%s\n",p->stu);
} 