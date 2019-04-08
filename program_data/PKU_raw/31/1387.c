struct student
{char a[88];
struct student *next;
};
struct student *creat(void)
{struct student *p1,*p2,*head;
p1=p2=(struct student *)malloc(LEN);
gets(p1->a);
p1->next=0;
while(strcmp(p1->a,"end")!=0)
{p2=p1;
p1=(struct student *)malloc(LEN);
gets(p1->a);
p1->next=p2;

}
head=p2;
return(head);
}
void print(struct student *head)
{struct student *p;
p=head;
while(p!=0)
{puts(p->a);
p=p->next;}
}
void main()
{struct student *head;
head=creat();
print(head);
}