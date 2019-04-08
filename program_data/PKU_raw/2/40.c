struct book
{
 int a;
 char b[30];
 struct book *next;
};
void main()
{
 int i,k,m,max=0,t;
 char j,ch;
 struct book *head,*p1,*p2;
 scanf("%d",&m);
 p1=(struct book*)calloc(1,sizeof(struct book));
 head=p1;
 for(i=0;i<m;i++)
 {
  scanf("%d %s",&(p1->a),p1->b);
  p2=p1;
  if(i==m-1)
   p2->next=NULL;
  else
  {
   p1=(struct book*)calloc(1,sizeof(struct book));
   p2->next=p1;
  }
 }
 for(j='A';j<='Z';j++)
 {
 t=0;
 p1=head;
 while(p1)
 {
  for(k=0;k<strlen(p1->b);k++)
   if((p1->b)[k]==j)
	t++;
  p1=p1->next;
 }
 if(t>max)
 {
  max=t;
  ch=j;
 }
 }
 printf("%c\n",ch);
 printf("%d\n",max);
 p1=head;
 while(p1)
 {
  for(k=0;k<strlen(p1->b);k++)
   if((p1->b)[k]==ch)
	printf("%d\n",p1->a);
  p1=p1->next;
 } 
}