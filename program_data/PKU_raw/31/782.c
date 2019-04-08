struct L
{
 char a[6][20];
 struct L *pq;  
 struct L *ph; 
};
struct L *creat(void)
{
 struct L *p1,*p2,*p3,*head,*end;
 int i,j,k,l;
 l=sizeof(struct L);
 p1=head=(struct L *)malloc(l);
 p1->pq=NULL;
 do
 {
  for(i=0;i<6;i++)
   scanf("%s",p1->a[i]);
  p2=(struct L *)malloc(l);
  p3=p2->pq=p1;
  p1->ph=p2;
  p1=p2;
 }while(p3->a[0][0]!='e');
 return p3->pq;
} 
int main()
{struct L *creat(void);
 int i,j;
 struct L *head,*p1,*p2;
 p1=head=creat();
 do
 {for(i=0;i<6;i++)
  {if(i==0) printf("%s",p1->a[0]);
   else printf(" %s",p1->a[i]);}
  printf("\n");
  p1=p1->pq;
 }while(p1!=NULL);
}