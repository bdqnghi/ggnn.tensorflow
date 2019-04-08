struct man
{
 char num[10];
 int age;
 int nu;
 struct man *next;
};
int f(char *a,int b,int n1,char *c,int d,int n2)
{int sum;
 if(b>=60&&d>=60)
 {if(b>d)
 sum=1;
 else if(b<d)
  sum=-1;
 else
  sum=n2-n1;
 }
 else if(b>=60&&d<60)
  sum=1;
    else if(b<60&&d>=60)
        sum=-1;
 else
        sum=n2-n1;
 return(sum);
}
struct man *insert(struct man *head,struct man *stud,int n)
{struct man *p0,*p1,*p2;
p1=head;
p0=stud;
scanf("%s %d",p0->num,&p0->age);
p0->nu=n+1;
p0->next=NULL;
if(head==NULL)
head=p0;
else
{while((f(p0->num,p0->age,p0->nu,p1->num,p1->age,p1->nu)<0)&&(p1->next!=NULL))
{p2=p1;
p1=p1->next;}
if(f(p0->num,p0->age,p0->nu,p1->num,p1->age,p1->nu)>0)
{if(head==p1)head=p0;
else p2->next=p0;
p0->next=p1;}
else
{p1->next=p0;}
}
return(head);
}
void print(struct man *head,int n)
{struct man *p;
int k;
p=head;
for(k=0;k<n;k++)
{printf("%s\n",p->num);
p=p->next;}
}
void main()
{  
	int n,k;
struct man *head,*stu;
head=NULL;
scanf("%d",&n);
for(k=0;k<n;k++)
{stu=(struct man *)malloc(LEN);
	head=insert(head,stu,k);
}
print(head,n);
}