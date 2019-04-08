int change(char a[100])
{
 int i,l,s;
 l=strlen(a);
 s=0;
 for(i=0;i<l;i++)
 {
  s=s*10+a[i]-'0';
 }
 return(s);
}
int main()
{
 char a[5000];
 char b[5000];
 char s[10];
 int c[2][1000]={0};
 int t[1000]={0};
 int l,i,j,k,t1,t2,x,m;
 gets(a);
 gets(b);
 l=strlen(a);
 j=0;
 k=0;
 for(i=0;i<l;i++)
 {
  if(a[i]!=',')
  {
   s[j]=a[i];
   j++;
  }
  else
  {
   s[j]='\0';
   c[0][k]=change(s);
   s[0]='\0';
   j=0;
   k++;
  }
 }
 s[j]='\0';
 c[0][k]=change(s);
 s[0]='\0';
 l=strlen(b);
 j=0;
 k=0;
 for(i=0;i<l;i++)
 {
  if(b[i]!=',')
  {
   s[j]=b[i];
   j++;
  }
  else
  {
   s[j]='\0';
   c[1][k]=change(s);
   s[0]='\0';
   j=0;
   k++;
  }
 }
 s[j]='\0';
 c[1][k]=change(s);
 t1=c[0][0];
 for(i=1;i<=k;i++)
 {
  if(c[0][i]<t1)
   t1=c[0][i];
 }
 t2=c[1][0];
 for(i=1;i<=k;i++)
 {
  if(c[1][i]>t2)
   t2=c[1][i];
 }
 for(i=t1;i<t2;i++)
 {
  m=i-t1;
  for(j=0;j<=k;j++)
  {
   if(c[0][j]<=i&&c[1][j]>i)
    t[m]++;
  }
 }
 x=t[0];
 for(i=0;i<t2-t1;i++)
 {
  if(t[i]>x)
   x=t[i];
 }
 printf("%d %d",k+1,x);
 return 0;
}
