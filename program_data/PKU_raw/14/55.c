struct stu
{
 int a;
 int b;
 int c;
 struct stu *next;
};
void main()
{
 int i,j,n,t,sum[100000];
 struct stu *head,*p1,*p2;
 scanf("%d",&n);
 p1=(struct stu*)malloc(sizeof(struct stu));
     scanf("%d%d%d",&(p1->a),&(p1->b),&(p1->c));
     sum[0]=p1->b+p1->c;
     head=p1;
	 p2=p1;
 for(i=1;i<n;i++)
  {
     p1=(struct stu*)malloc(sizeof(struct stu));
     p2->next=p1;
     scanf("%d%d%d",&(p1->a),&(p1->b),&(p1->c));
     sum[i]=p1->b+p1->c;
	 p2=p1;
   }
   p2->next=NULL;
  for(i=0;i<3;i++)
   for(j=i+1;j<n;j++)
    if(sum[i]<sum[j])
     {
      t=sum[i];
      sum[i]=sum[j];
      sum[j]=t;
	}
  for(i=0;i<3;i++)
  {
   p1=head;
   while(p1->b+p1->c!=sum[i]&&p1)
    {
     p1=p1->next;
    }
   if(p1)
   {
   printf("%d %d\n",p1->a,sum[i]);
   p1->b=0;
   p1->c=0;
   }
  }
}