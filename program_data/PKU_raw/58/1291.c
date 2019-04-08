main()
{
 int n,i,a,j,b=1;
 char p[100],m[3];
 scanf("%d",&n);
 gets(m);
 for(i=1;i<=n;i++)
 {  
  gets(p);
  if((p[0]>='a'&&p[0]<='z')||(p[0]>='A'&&p[0]<='Z')||p[0]=='_')
    a=1;
  else
    a=0;
  for(j=1;p[j]!='\0';j++)
     if((p[j]>='a'&&p[j]<='z')||(p[j]>='A'&&p[j]<='Z')||p[j]=='_'||(p[j]>='0'&&p[j]<='9'))
       b=1;
     else
      {
       b=0;
       break;
      }
  printf("%d\n",a*b);
  b=1;
 }
} 
