int f(int x)
{
 int k,m;
 for(k=0;k<=9;k++)
 {if(x==k)
  break;
  }
  if(k>9)  m=0;
  else m=1;
  return m;
}
main()
{
 int n,i,j,l;
 char a[80],b[5];
 gets(b);
 n=atoi(b);
 for(j=0;j<n;j++)
 {
  gets(a);
  l=strlen(a);
  

  if((a[0]=='_')||((a[0]>='A')&&(a[0]<='Z'))||((a[0]>='a')&&(a[0]<='z')))
  { 
  for(i=1;i<l;i++)
  {   if((a[i]=='_')||((a[i]>='A')&&(a[i]<='Z'))||((a[i]>='a')&&(a[i]<='z')))
     continue;
     else if(f(a[i]-'0')==1)
     continue;
     else break;
  }
  if(i==l||i==l+1)
  printf("1\n");
  else
  printf("0\n");
 }
  else
  printf("0\n");
}

  getchar();
  getchar();
  getchar();
  getchar();
}
