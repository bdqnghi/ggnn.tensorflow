struct element
{
  int num;
  struct element *next;
};
void main()
{
  int n,m,i;
  struct element *head,*p1,*p2,*p;
  scanf("%d%d",&n,&m);
  head=NULL;
  for(i=1;i<=n;i++)
  {
	p1=(struct element *)malloc(LEN);
    scanf("%d",&p1->num);
	if(i==1) head=p1;
	else p2->next=p1;
	p2=p1;
	if(i==n-m+1) p=p1;
  }
  p2->next=head;
  
  printf("%d",p->num);
  for(i=1;i<n;i++)
  {
    p=p->next;
	printf(" %d",p->num);
  }
}