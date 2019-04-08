struct book
{
    char writer[32];
    int id;
    struct book *next;
};
struct book *create(int m)
{
     struct book *head=NULL,*p1,*p2;
     int i;
     p1=p2=(struct book*)malloc(Len);
     scanf("%d %s",&p1->id,p1->writer);
     p1->next=NULL;
     head=p1;
     p2=p1;
     for(i=1;i<m;i++)
        {
            p1=(struct book*)malloc(Len);
             scanf("%d %s",&p1->id,p1->writer);
            p1->next=NULL;
            p2->next=p1;
            p2=p1;
        }
         return head;
}
int main()
{
    struct book *head,*p;
    int m,i,*q1,*q2,j;
    q1=(int*)malloc(26*sizeof(int*));
      q2=q1;
    for(i=0;i<26;i++)
      q1[i]=0;
    q1=q2;
    scanf("%d",&m);
    head=create(m);
    p=head;
    for(i=0;i<m;i++)
    {
       for(j=0;p->writer[j]!='\0';j++)
       q1[p->writer[j]-'A']++;
       p=p->next;
    }
    q1=q2;
    int max=0;
    char maxm='A';
    for(i=0;i<26;i++)
      if(max<q1[i]) {max=q1[i];maxm=i+'A';}
      printf("%c\n%d",maxm,max);
    for(i=0,p=head;i<m;i++,p=p->next)
      for( j=0;p->writer[j]!='\0';j++)
        if(p->writer[j]==maxm) printf("\n%d",p->id);
}
