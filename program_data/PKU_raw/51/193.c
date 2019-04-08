int main()
{
 int n,a[1001];
 char str[1001];
 scanf("%d",&n);
 char s[1001][1001];
 scanf("%s",str);
 int i,j,t=0,m,p;
 m=strlen(str)-n;
 for(i=0;i<=m;i++)
 {
  for(j=0;j<n;j++)
  {
   s[i][j]=str[i+j];
  }
 }
 for(i=0;i<=m;i++)
 {
   a[i]=0;
   for(j=0;j<=m;j++)
   {
    if(strcmp(s[i],s[j])==0) a[i]++;
   }
 }
 for(i=0;i<=m;i++)
 {
  if(a[i]>t) t=a[i];
 }
 if(t==1) printf("NO\n");
 else{
 printf("%d\n",t);
 for(i=0;i<=m;i++)
 {
	 p=0;
	 for(j=0;j<i;j++)
	 {if(strcmp(s[i],s[j])==0) p=1;}
	 if(a[i]==t&&p==0) printf("%s\n",s[i]);
 }}
}