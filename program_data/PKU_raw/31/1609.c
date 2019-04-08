struct s
{
      char a[100];
      char b[100];
      char c;
      int d;
      char e[100];
      char f[100];
      struct s *t;
      }k[1000];
int n;
int main(int argc, char *argv[])
{ int i;
    struct s *head,*p;
  for(i=0;;i++)
  {
     scanf("%s",k[i].a);
     if(strcmp(k[i].a,"end")==0)
     break;
     scanf(" %s %c %d %s %s",k[i].b,&k[i].c,&k[i].d,k[i].e,k[i].f);
     if(i>0)
     k[i].t=&k[i-1];
     if(i==0)
     k[i].t=NULL;
  }
  head=&k[i-1];
  p=head;
  do{
  printf("%s %s %c %d %s %s\n",p->a,p->b,p->c,p->d,p->e,p->f);
  p=p->t;}
  while(p!=NULL);
  return 0;
}
