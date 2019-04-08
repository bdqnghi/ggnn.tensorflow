

struct num
{int nianling;
float defen;
char q[200],w[100],xingbie,xuehao[200];
struct num *next;
};
struct num *crea()
{long i;
  struct num *head;
  struct num *p1,*p2;
   p1=p2=(struct num *)malloc(LEN);
   head=p1;
   scanf("%s %s %c %d %f %s",&p1->xuehao,&p1->q,&p1->xingbie,&p1->nianling,&p1->defen,&p1->w);

head->next=NULL;
  for(;;)
    {  
p1=(struct num *)malloc(LEN);
scanf("%s",&p1->xuehao);if(p1->xuehao[0]!='e')      
{scanf("%s %c %d %f %s",&p1->q,&p1->xingbie,&p1->nianling,&p1->defen,&p1->w);

       p1->next=p2;
       p2=p1;}
else  {p1->next=p2,p2=p1;break;}
       }
   return(p1);
}
void main()
{

long nx,m,m0,tx,qx,q,mxh;
struct num *hi,*p,*t;
hi=crea();
t=hi->next;
for(p=t;p!=NULL;p=p->next)
{printf("%s %s %c %d %g %s\n",p->xuehao,p->q,p->xingbie,p->nianling,p->defen,p->w);
}
}

