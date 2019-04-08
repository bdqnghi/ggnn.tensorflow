int main()
{
 char c[1000];
 int n,x=0,i;
 int a,b;
 scanf("%d%s%d",&a,c,&b);
 n=strlen(c);
 for(i=0;i<=n-1;i++)
 {
  if('A'<=c[i] && c[i]<='Z')
   c[i]=c[i]-'A'+10;
  else if('a'<=c[i]&&c[i]<='z')
   c[i]=c[i]-'a'+10;
  else if('0'<=c[i]&&c[i]<='9')
   c[i]=c[i]-'0';
 }
  for(i=0;i<=n-1;i++)
  {
   x=x+c[i]*pow(a,n-i-1);
  }
  if(x==0)
   printf("%d",x);
  if(x!=0)
  {
  int y;int n[100],j;
   y=x;
   for(i=0;y!=0;i++)
   {
       n[i]=y%b;
       y=y/b;
   }
   for(j=i-1;j>=0;j--)
   {
    if(0<=n[j] && n[j]<10)
     printf("%d",n[j]);
    else if(n[j]>=10)
    {
     n[j]=n[j]+'A'-10;
        printf("%c",n[j]);
    }
   }
  }
   printf("\n");
   getchar();
   getchar();
}
