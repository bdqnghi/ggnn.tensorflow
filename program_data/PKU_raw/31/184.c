//struct student
struct student
{
    char content[50];
    struct student *next;
};

int main()
{
    struct student *head,*p1,*p2,*p3,*h,*p4,*p5,*p6;
    int i,j,k;
    char s[16];
    s[0]='e';
    s[1]='n';
    s[2]='d';
    s[3]='\0';
    int m=0;
    p6=p4=p5=p3=p1=p2=(struct student *)malloc(sizeof(struct student));
    gets(p1->content);
    p4=p1;
    for(;strcmp(p1->content,s)!=0;)
    {
            p2=p1;
            p1=(struct student *)malloc(sizeof(struct student));
            p1->next=p2;
            gets(p1->content);
    }
    p4->next=NULL;
    p3=head=p1->next;
    m=0;
    for(;p3!=NULL;)
    {
                   m++;
                   if(m==1)
                   {
                           printf("%s",p3->content);
                   }
                   else
                   {
                           printf("\n%s",p3->content);
                   }
                   p3=p3->next;
    }
    return 0;
}