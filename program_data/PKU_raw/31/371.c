struct Student
{
        char information[200];
        struct Student *next;
};
int n;
struct Student*creat()
{
        struct Student *p1,*p2,*head;
        n=0;
        p1=p2=(struct Student *)malloc(LEN);
        gets(p1->information);
        head=NULL;
        while(strcmp(p1->information,"end")!=0)
        {
                n=n+1;
                if(n==1)
                {
                        p1->next=NULL;
               }
                else
                {
                        p1->next=p2;
                }
                p2=p1;
                p1=(struct Student *)malloc(LEN);
                gets(p1->information);
        }
        head=p2;
        return(head);
}
void print(struct Student *head)
{
        struct Student *p;
        p=head;
        if(head!=NULL)
                do
                {
                        printf("%s\n",p->information);
                        p=p->next;
                }
                while(p!=NULL);
}
int main()
{
        struct Student * head;
        head=creat();
        print(head);
        return 0;
}
