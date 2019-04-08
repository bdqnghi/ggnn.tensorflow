
struct a
{
struct a*back;
char a[20];
char b[20];
char c;
int d;
char e[20];
char f[20];
struct a*next;      
};
int main()
{
    struct a *pHeader,*pEnd,*p1;
    pHeader=(struct a*)malloc(sizeof(struct a));
    pHeader->back=NULL;
    p1=pHeader;
    struct a*p;
    char g;
    for(;;)
    {
    p=(struct a*)malloc(sizeof(struct a));
    scanf("%s",p->a);
    g=*p->a;
    if(g=='e') 
    {
    pEnd=p;
    p->back=p1;
    p1->next=p;
    p->next=NULL; 
    break;
    }
    p->back=p1;
    p1->next=p;
    p1=p;
    scanf("%s %c %d %s %s",p->b,&p->c,&p->d,&p->e,p->f);
    }
    printf("%s %s %c %d %s %s\n",p1->a,p1->b,p1->c,p1->d,p1->e,p1->f); 
    p=pEnd;       
    for(;;)
    {
    printf("%s %s %c %d %s %s\n",p1->back->a,p1->back->b,p1->back->c,p1->back->d,p1->back->e,p1->back->f); 
   p1=p1->back;
   free(p1->next);
    
    if(p1->back->back==NULL) break;
    }

}
