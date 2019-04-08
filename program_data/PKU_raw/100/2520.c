int main()
{
 char s[301],c;
 int i,j,len,a[300],t=0;
 gets(s);
 len=strlen(s);
 for(i=0;i<len-1;i++)
  for(j=0;j<len-1-i;j++)
   if(s[j]>s[j+1]) {c=s[j];s[j]=s[j+1];s[j+1]=c;}
 for(i=0;i<len;i++)
  if(s[i]<=64 || s[i]>=123 || (s[i]>=91 && s[i]<=96) ) a[i]=-500;
  else a[i]=1;
 for(i=0;i<len-1;i++)
  for(j=i+1;j<len;j++)
   if(s[i]==s[j]) a[i]++;
 for(i=0;i<len;i++)
  if(a[i]>0 && s[i]!=s[i-1])
   {printf("%c=%d\n",s[i],a[i]);t++;}
 if(t==0) printf("No");
  return 0;
}
