int main()
{
int t,i,j,k,l,m,n,b[100000];
char a[100000];
scanf("%d",&t);
for(i=1;i<=t;i++)
 {
 scanf("%s",a);
 l=strlen(a);
 for(j=0;j<l;j++)
  {
  b[j]=0;
  }  
 for(j=0;j<l;j++)
  {
  for(k=0;k<l;k++)
   {
   if(j==k) continue;
   if(a[j]==a[k]) b[j]++;
   }
  }
  for(j=0;j<l;j++)
  {
  if(b[j]==0) {printf("%c\n",a[j]); break;}
  else m=j;
  }
  if(m==l-1) printf("no\n");
 }

}
