int sch(int,int,char[],char[],int);
void main()
{  struct student
{char name[20];
int ave;
int jud;
char gan[2];
char xib[2];
int pap;
struct student *next;
} *p1,*p2,*head,*p;
int n,i,max,t;
scanf("%d",&n);

p=head=p1=p2=(struct student *)malloc(sizeof(struct student));
scanf("%s",p1->name);
scanf("%d%d",&p1->ave,&p1->jud);
scanf("%s",p1->gan);
scanf("%s",p1->xib);
scanf("%d",&p1->pap);
max=t=sch(p1->ave,p1->jud,p1->gan,p1->xib,p1->pap); 

for(i=2;i<=n;i++)
{p1=(struct student *)malloc(sizeof(struct student));

scanf("%s",p1->name);
scanf("%d%d",&p1->ave,&p1->jud);
scanf("%s",p1->gan);
scanf("%s",p1->xib);
scanf("%d",&p1->pap); 

t=t+sch(p1->ave,p1->jud,p1->gan,p1->xib,p1->pap);
if(sch(p1->ave,p1->jud,p1->gan,p1->xib,p1->pap)>max)
{max=sch(p1->ave,p1->jud,p1->gan,p1->xib,p1->pap);
p=p1;
}
p2->next=p1;
p2=p1;
}
p2->next=NULL;
printf("%s\n%d\n%d\n",p->name,max,t);
 
}
int sch(int ave,int jud,char gan[],char xib[],int pap)
{int t=0;
if(ave>80&&pap>=1)
t=t+8000;
if(ave>85&&jud>80)
t=t+4000;
if(ave>90)
t=t+2000;
if(ave>85&&strcmp(xib,"Y")==0)
t=t+1000;
if(jud>80&&strcmp(gan,"Y")==0)
t=t+850;
return(t);
}
