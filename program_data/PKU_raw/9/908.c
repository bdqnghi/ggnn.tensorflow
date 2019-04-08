
struct patient{
	char ID[10];
	int age;
	struct patient *next;
};

struct patient *creat(int n)
{ int i;
  struct patient *head;
  struct patient *p1,*p2;
   p2=p1=(struct patient *)malloc(LEN);
   head=p1;
   scanf("%s %d",p1->ID,&p1->age);
  for(i=1;i<n;i++)
    {  
p1=(struct patient *)malloc(LEN);
 scanf("%s %d",p1->ID,&p1->age);
p2->next=p1;
p2=p1;
     }
     p2->next=NULL;
   return(head);
}

int main()
{
	int i,j,n;
	char a[10];
	scanf("%d",&n);
    struct patient *h,*q,*p;
    h=creat(n);
	for(i=0;i<n;i++)
	 for(q=h;q->next!=NULL;q=q->next)
	 if(q->next->age>=60&&q->next->age>q->age)
	 {
 		strcpy(a,q->ID);strcpy(q->ID,q->next->ID);strcpy(q->next->ID,a);
 		j=q->age;q->age=q->next->age;q->next->age=j;
 	}
    for(p=h;p!=NULL;p=p->next)
     printf("%s\n",p->ID);
}
