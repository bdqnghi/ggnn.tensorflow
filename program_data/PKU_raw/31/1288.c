struct sd
{char xh[100];char xm[100];char xb;int nl;double df;char dz[10];struct sd*before;};

struct sd* cre()
{struct sd *p1,*p2=NULL;

while(1){p1=(struct sd*)(malloc(sizeof(struct sd)));

scanf("%s",p1->xh);
if(strcmp(p1->xh,"end")==0)break;
else{  p1->before=p2;p2=p1; 
	scanf("%s %c %d %lf %s",p1->xm,&p1->xb,&p1->nl,&p1->df,p1->dz);  }}
return p2;
}
void main()
{struct sd*cre();
	struct sd*p=cre();
	while(1){printf("%s %s %c %d %g %s\n",p->xh,p->xm,p->xb,p->nl,p->df,p->dz);
if(p->before==NULL)break; 
else p=p->before; }}
