

struct Student
{
   char imf[100];
   struct Student *next,*pre;    
};

int main()
{
    
    struct Student *p,*q,*h;
    
    h=p=q=malloc(LEN);
    gets(q->imf);
    q->pre=q->next=NULL;
    
    while(strcmp(q->imf,"end")!=0)
    {
       p=q;
       q=malloc(LEN);
       q->next=NULL;
       q->pre=p;
       p->next=q;
       gets(q->imf);                     
    }
    
    while(p!=NULL)
    {
      puts(p->imf);   
      p=p->pre;            
    }
}
