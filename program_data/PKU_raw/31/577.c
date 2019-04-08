struct s
{
      char a[100];
      char b[100];
      char c;
      int d;
      char e[100];
      char f[100];
      }k[1000];
int n;
int main(int argc, char *argv[])
{ int i;
    
  for(i=0;;i++)
  {
     scanf("%s",k[i].a);
     if(strcmp(k[i].a,"end")==0)
     break;
     scanf(" %s %c %d %s %s",k[i].b,&k[i].c,&k[i].d,k[i].e,k[i].f);
  }
  for(i=i-1;i>=0;i--)
  printf("%s %s %c %d %s %s\n",k[i].a,k[i].b,k[i].c,k[i].d,k[i].e,k[i].f);
  return 0;
}
