int count(char b[][6],char c[],int d[],int num)
{
  int k=0;
  while(k<num && strcmp(b[k],c)!=0)   {++k;}
  if(k<num)
  {
    d[k]++;
    return num;
  }
  else
    {
      strcpy(b[num],c);
      d[num]=1;
      return num+1;
      }
   }
void main()
{
  char a[301],b[301][6],c[6];
  int i,j,k,l,n,num,d[301],max;
  scanf("%d\n",&n);
 scanf("%s",a);
  l=strlen(a);
  num=0;
  for(i=0;i<=l-n;++i)
  {
    for(j=0;j<n;++j)
    {
      c[j]=a[i+j];
    }
    c[j]='\0';
    num=count(b,c,d,num);
  }
  max=d[0];
   for(i=0;i<num;i++)
   {
       if(d[i]>=max)    max=d[i];
   }
   if(max==1)   printf("NO");
   else
   {
   printf("%d\n",max);
   for(k=0;k<l-n;k++)
   {
       if(d[k]==max)    printf("%s\n",b[k]);
   }
   }
}