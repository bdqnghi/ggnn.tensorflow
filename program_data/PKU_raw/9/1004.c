struct patient
{
 char id[20];
 int age;
 struct patient *next;
}*head,*p1,*p2;
struct patient *order(int n)
{
 int i,j,t;
 char a[20];
 for(i=0;i<n-1;i++)
 {
  p1=head;p2=p1->next;
   for(j=0;j<n-1-i;j++)
   {
    if(p2->age>=60&&p1->age<p2->age)
     {
       t=p1->age;p1->age=p2->age;p2->age=t;
       strcpy(a,p1->id);strcpy(p1->id,p2->id);strcpy(p2->id,a);
      }
     p1=p1->next;p2=p2->next;
    }
  }
return head;
}
void main()
{
 int n,i;
 scanf("%d",&n);
 p1=head=(struct patient *)malloc(sizeof(struct patient));
 for(i=0;i<n;i++)
 {
  scanf("%s %d",p1->id,&p1->age);
  p2=p1;
  p1=(struct patient *)malloc(sizeof(struct patient));
  p2->next=p1;
  }
 p2->next=NULL;
 p1=order(n);
 while(p1)
 {
  printf("%s\n",p1->id);
  p1=p1->next;
  }
}