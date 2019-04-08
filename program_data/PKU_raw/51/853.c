int main()
{
 int i,j,n,a[500],d[500],len,m,t;
 char s[500][5],b[500],c[5];
 scanf("%d\n",&n);
 gets(b);
 len=strlen(b);
 for(i=0;i<=len-n;i++)
 {
  for(j=0;j<n;j++)
    s[i][j]=b[i+j];
  s[i][n]=0;
  d[i]=i;
 }
 for(i=0;i<=len-n;i++)
  a[i]=0;
 for(i=0;i<len-n;i++)
  for(j=i+1;j<=len-n;j++)
    if(strcmp(s[i],s[j])==0) a[i]++;
 for(i=0;i<len-n;i++)
  for(j=0;j<len-n-i;j++)
   if(a[j]<a[j+1]) {m=a[j];a[j]=a[j+1];a[j+1]=m; strcpy(c,s[j]);strcpy(s[j],s[j+1]);strcpy(s[j+1],c); m=d[j];d[j]=d[j+1];d[j+1]=m;}
 if(a[0]==0) printf("NO");
 else if(a[0]-a[1]>0) {printf("%d\n",a[0]+1);puts(s[0]);}
 else 
  {
   for(i=0;i<len-n;i++)
    if(a[i]-a[i+1]>0) {m=i;break;}
   for(i=0;i<m;i++)
    for(j=0;j<m-i;j++)
      if(d[j]>d[j+1]) {strcpy(c,s[j]);strcpy(s[j],s[j+1]);strcpy(s[j+1],c);}
   printf("%d\n",a[0]+1);
   for(i=0;i<=m;i++)
     puts(s[i]);
      
   }
  
 
  return 0;
}
