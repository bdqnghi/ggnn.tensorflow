int main()
{
  int n,i,j,a=0;
  double b,s[5000];
  struct distance{ double x,y;
         }dis[100];
   scanf("%d",&n);
  for(i=0;i<n;i++)
  scanf("%lf%lf",&dis[i].x,&dis[i].y);
  for(i=1;i<n;i++)
  for(j=0;j<i;j++)
  {
  s[a]=sqrt((dis[i].x-dis[j].x)*(dis[i].x-dis[j].x)+(dis[i].y-dis[j].y)*(dis[i].y-dis[j].y));
  a++;  }
  for(i=a-1;i>0;i--)
  for(j=0;j<i;j++)
  if(s[j]>s[j+1])
  {
    b=s[j+1];
    s[j+1]=s[j];
    s[j]=b;
    }
  printf("%.4f\n",s[a-1]);
 return 0;
}
  