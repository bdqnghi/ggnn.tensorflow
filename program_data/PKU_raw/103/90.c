main()
{
int i,j,l,k=0;
char s[1000];
char a[1000];
int b[1000];
gets(s);
l=strlen(s);
a[0]=s[0];
b[0]=1;
for(i=1;i<l;i++)
{
 if(s[i]==s[i-1]||(s[i]-s[i-1])==32||(s[i-1]-s[i])==32)
 {
  if(s[i]<91) a[k]=s[i];
  else a[k]=s[i]-32;
  b[k]++;
  }
 else
 {
 k++;
 b[k]=0;
 a[k]=s[i];
 b[k]++;
 }
}
for(j=0;j<=k;j++)
{
if(a[j]<91) printf("(%c,%d)",a[j],b[j]);
else printf("(%c,%d)",a[j]-32,b[j]);
}
getchar();
getchar();
}
