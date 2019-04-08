struct stdnt
{
char num[20];
char name[20];
char gndr;
int age;
double score;
char adrs[30];
struct stdnt* next;
};

int n;

struct stdnt *creat()
{
struct stdnt *p1,*p2=0;
p1=(struct stdnt*)malloc(LEN);
for (n=0;;n++)
    {
    if (n==0) p1->next=0;
    scanf("%s",p1->num);
    if (strcmp(p1->num,"end")==0) 
       break;
    else p2=p1;
    scanf("%s %c%d%lf %s",p1->name,&p1->gndr,&p1->age,&p1->score,p1->adrs);
    p1=(struct stdnt*)malloc(LEN);
    p1->next=p2;
    }
return p1->next;
}

void output(struct stdnt* p)
{
while (p!=0)
      {
      printf("%s %s %c %d %g %s\n",p->num,p->name,p->gndr,p->age,p->score,p->adrs);
      p=p->next;
      }
}

int main()
{
struct stdnt *p;
p=creat();
output(p);

}
