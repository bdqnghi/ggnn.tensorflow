
struct student 
{ 
    char id[50]; 
    char name[50]; 
    char sex;
    int age;                  
    double grade;
    char a[20];
    struct student *next;
};


void main() 
{
    struct student *h,*p,*q;
    int n=0;
    p=(struct student*)malloc(LEN);
    scanf("%s",p->id);
    while(p->id[0]!='e')
    {
         scanf("%s %c%d%lf%s",p->name,&p->sex,&p->age,&p->grade,p->a);
         n=n+1;
         if(n==1) p->next=NULL;
         else p->next=h;
         h=p;
         p=(struct student *)malloc(LEN);
         scanf("%s",p->id);
    }
    p=h;
    do
    {
        printf("%s %s %c %d %g %s\n",p->id,p->name,p->sex,p->age,p->grade,p->a);
        p=p->next;
    }
    while(p!=NULL);     
}

