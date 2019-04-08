struct book
{
int num;
char name[27];
struct book *next;
};


struct book *creat(int n)
{
 struct book *head,*p1,*p2;
 int m=0;
 head=p1=p2=NULL;
 p1=p2=(struct book *)malloc(sizeof(struct book));
 scanf("%d %s",&p1->num,p1->name);
 while(1)
 {
  m+=1;
  if(m>=n)break;
  if(m==1)head=p1;
  else p2->next=p1;
  p2=p1;
  p1=(struct book *)malloc(sizeof(struct book));
  scanf("%d %s",&p1->num,p1->name);
 }
p2->next=p1;
  p2=p1;
 p2->next=NULL;
 return(head);
}

 

void main()
{
 struct book *head,*p;
    char maxchar;
 int m,i=0,max=0,a[26]={0};
 scanf("%d",&m);
 head=creat(m);


 for(p=head;p!=NULL;p=p->next)
 {
	 //printf("%d,%s\n",p->num,p->name);
  for(i=0;p->name[i]!='\0';i++)
  {
   int c=p->name[i]-'A';
   a[c]++;
  }
 }

 for(i=0;i<26;i++)
 {
  if(a[i]>max)
  {
   max=a[i];
   maxchar='A'+i;
  }
 }

 printf("%c\n%d\n",maxchar,max);
 for(p=head;p!=NULL;p=p->next)
  for(i=0;p->name[i]!='\0';i++)
  {
   if(p->name[i]==maxchar)
   {
    printf("%d\n",p->num);
    break;
   }
  }
}

