int main()
{
 int n, i;
 scanf("%d", &n);
 int sum[100]={0}, total=0;
 char name[100][20];
 for(i=0;i<n;i++)
 {
  int a, b;
  char p[2], q[2];
  int l;
  scanf("%s%d%d%s%s%d", &name[i], &a, &b, &p, &q, &l);
  if(a>80&&l!=0)
  {
   sum[i]+=8000;
  }
  if(a>85&&b>80)
  {
   sum[i]+=4000;
  }
  if(a>90)
  {
   sum[i]+=2000;
  }
  if(a>85&&strcmp(q,"Y")==0)
  {
   sum[i]+=1000;
  }
  if(b>80&&strcmp(p,"Y")==0)
  {
   sum[i]+=850;
  }
  total+=sum[i];
 }
 int max=0, k;
 for(i=0;i<n;i++)
 {
  if(sum[i]>max)
  {
   max=sum[i];
   k=i;
  }
 }
 printf("%s\n%d\n%d\n", name[k], sum[k], total);
 return 0;
}