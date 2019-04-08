int main()
{
  char s1[100],s;
  int a[310],i=0,j=0,t=0,k,r;
  while(1)
  {
   s=getchar();
   if(s=='\n')
   { 
    r=1;
    for(k=j-1;k>=0;k--)
    {
     t+=(s1[k]-'0')*r;
     r*=10;
    }
    a[i]=t;
    t=0;
    j=0;
    i++;
    break;
   }
   else if(s>='0'&&s<='9')
   {
    s1[j]=s;
    j++;
   }
   else
   {
    r=1;
    for(k=j-1;k>=0;k--)
    {
     t+=(s1[k]-'0')*r;
     r*=10;
    }
    a[i]=t;
    t=0;
    j=0;
    i++;
   }
  }
  int n=i;
  int max=-1;
  for(i=0;i<n;i++)
   if(a[i]>max) max=a[i];
  for(i=0;i<n;i++)
   if(a[i]==max) a[i]=-2;
  max=-1;
  for(i=0;i<n;i++)
   if(a[i]>max) max=a[i];
  if(max>-1)
   printf("%d\n",max);
  else printf("No\n");
  getchar();
  getchar();
}
