void main()
{
  char str[10000];
  unsigned a[301],t,first=0,second=0;
  int i,j,m,n;
  gets(str);
  m=strlen(str);
  for(i=0,n=1;i<=m;i++)
  if(str[i]==',')n++;
  for(i=1,j=0;i<=n&&j<m;i++)
  {a[i]=0;
   for(t=1;t<=4;t++)
   {
   if(str[j]!=','&&str[j]!='\0')
   {a[i]=a[i]*10+str[j++]-'0';}
   else {j++;break;}
  }}
  for(i=1;i<n;i++)
	  for(j=1;j<=n-i;j++)
		  if(a[j]<a[j+1]){t=a[j];a[j]=a[j+1];a[j+1]=t;}
  for(i=1;i<=n;i++)
  {
  if(a[i]>first){first=a[i];}
  else if(a[i]>second&&a[i]<first){second=a[i];}}
  if(second==0)printf("No");
  else printf("%u",second);
}


  
  
  
  