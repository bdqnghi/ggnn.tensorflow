struct monkey 
{
int a;
struct monkey *next;
};
int main()
{
int n,m;
struct monkey *creat (int n);
struct monkey *delet(struct monkey *head,int m,int n);
scanf("%d%d",&n,&m);
if(n!=0)
do
{
	if(m!=1)
	{
		struct monkey * head;
head= creat(n);
head= delet(head,m,n);
printf("%d\n",head->a);
	}
	else printf("%d\n",n);
scanf("%d%d",&n,&m);
}
while(n!=0);




return 0;
}



struct monkey *creat (int n)
{
struct monkey *p1,*p2,*head;
int i;
head=p1=(struct monkey *)malloc(LEN);
for(i=0;i<n;i++)
{
p1->a=i+1;
p2=p1;
p1=(struct monkey *)malloc(LEN);
p2->next=p1;

}
p2->next=head;

return (head);
}
struct monkey *delet(struct monkey *head,int m,int n)
{
  struct monkey *p2=head;
  int i;
    while(head->next!=head)
  {
  
  if((m!=2)&&(m<=n))
  {
	  for(i=0;i<m-1;i++)
  { 
      p2=head;  
	  head=head->next;
  
  }
	  p2->next=head->next;
  head=head->next;
  }
  else
  {
	  if(m>n)
	  {
		   for(i=0;i<m-1;i++)
  { 
      p2=head;  
	  head=head->next;
  
  }
	  
	  p2->next=head->next;
      head=head->next;
	  }
	  else
  { 
	  p2=head;head=head->next;p2->next=head->next;head=head->next;}
  }
  n=n-1;
	}
return (head);
}