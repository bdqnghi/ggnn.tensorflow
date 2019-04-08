struct stu
{
  int id;
  int eng;
  int math;
  int sum;
  struct stu *next;
}*head,*p1,*p2;
struct stu *order(int n)
{
 int i,j,t;
 p1=head;
 for(i=0;i<3;i++)
 {
   p2=p1->next;
   for(j=i+1;j<n;j++)
   { if(p1->sum<p2->sum) 
    {
      t=p1->id;p1->id=p2->id;p2->id=t;
      t=p1->sum;p1->sum=p2->sum;p2->sum=t;
     }
   p2=p2->next;}
  p1=p1->next;
  }
 return head;
}
void main()
{
 int n,i;
 scanf("%d",&n);
 p1=head=(struct stu *)malloc(sizeof(struct stu));
 for(i=0;i<n;i++)
  {
    scanf("%d %d %d",&p1->id,&p1->eng,&p1->math);
    p1->sum=p1->eng+p1->math;
    p2=p1;
    p1=(struct stu *)malloc(sizeof(struct stu));
    p2->next=p1;
   }
 p2->next=NULL;
 p1=order(n);
 for(i=0;i<3;i++)
 {
  printf("%d %d\n",p1->id,p1->sum);
  p1=p1->next;
  }
}