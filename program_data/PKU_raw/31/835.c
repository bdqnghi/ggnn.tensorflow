struct student
{char info[100];
struct student *next1;
struct student *next2;
};
int n,i;
struct student *creat(void)
{
struct student *p1,*p2,*p3;
n=0;
p3=p2=p1=(struct student*)malloc(LEN);
gets(p1->info);
while(p1->info[0]!='e')
{
n+=1;
if(n==1){p2->next1=p1;
p2->next2=NULL;}
else {p2->next1=p1;
p2->next2=p3;}
p3=p2;
p1=(struct student *)malloc(LEN);
gets(p1->info);
p2=p1;
}
p3->next1=NULL;
return p3;
}

void print(struct student *head)
{
struct student *p;
p=head;
if(head!=NULL)
do{
printf("%s\n",p->info);
p=p->next2;
}while(p!=NULL);
}

int main()
{struct student *top;
top=creat();
print(top);
}
                
                