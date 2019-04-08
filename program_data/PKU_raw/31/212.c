struct student 
{char num[10];
char name[20];
char fm;
int age;
int score;
char add[50];
struct student *next;
       };
int n;
struct student *creat(void)
{struct student *head;
struct student *p1,*p2;
n=0;
p1=p2=(struct student*)malloc(LEN);
gets(p1->num);
head=NULL;
while(strcmp(p1->num,"end")!=0)
{n=n+1;
if(n==1) p1->next=NULL;
else p1->next=p2;p2=p1;head=p2;
p1=(struct student*)malloc(LEN);
gets(p1->num);
                 }

return head;
}

int main()
{struct student *head;
struct student *p1,*p2;
struct student *creat(void);
head=creat();
void print (struct student *head);
print(head);
    }
    
void print (struct student *head)
{struct student *p;
p=head;
if(head!=NULL)
do  {printf("%s\n",p->num);
p=p->next;}while (p!=NULL);
     }
