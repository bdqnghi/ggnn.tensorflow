typedef struct
{
  char ch[10];
  int ord;
  int times;
  int sign;
}gram;
int cmp(const void* a,const void* b)
{
  gram* pa;
  gram* pb;
  pa=(gram*)a;
  pb=(gram*)b;
  if(pa->times!=pb->times)return ((pa->times<pb->times))?1:-1;
  //if(strcmp(pa->ch,pb->ch))return (strcmp(pa->ch,pb->ch)>0)?1:-1;
  return ((pa->ord)>(pb->ord))?1:-1;
}
int main()
{
  char c[1000];
  gram d[1000];
  char *p;
  int n,i,j,k;
  scanf("%d%s",&n,c);
  p=c;
  for(i=0;i<strlen(c)+1-n;i++)
  {
    d[i].ord=i;
    d[i].sign=1;
    for(j=0;j<n;j++)
    d[i].ch[j]=*(p+j);
    d[i].ch[n]='\0';
    p++;
  }
  for(i=0;i<strlen(c)+1-n;i++)
  {
    k=1;
    for(j=0;j<strlen(c)+1-n;j++)
    if(i!=j&&strcmp(d[i].ch,d[j].ch)==0)k++;
    d[i].times=k;
  }
  qsort(d,strlen(c)+1-n,sizeof(d[0]),cmp);
  int m=d[0].times;
  if(m==1){printf("NO");return 0;}
  printf("%d\n",m);
  for(i=0;i<strlen(c)+1-n;i++)
  if(d[i].times==m&&d[i].sign)
  {
    printf("%s\n",d[i].ch);
    for(j=0;j<strlen(c)+1-n;j++)
    if(i!=j&&strcmp(d[i].ch,d[j].ch)==0)d[j].sign=0;
  }
  return 0;
}