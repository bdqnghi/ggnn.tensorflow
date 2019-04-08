main()
{
 char a[50],s[50];
 int i,j,m,n;
 scanf("%s %s",a,s);
 n=strlen(a);
 m=strlen(s);
 for(i=0;i<=m-1;i++)
  if(s[i]==a[0])
  {
   for(j=1;j<=n-1;j++)
   {
	if(a[j]==s[i+j]);
	else
	break;
   }
   if(j==n)
   printf("%d\n",i);
   break;
  }
}
   


