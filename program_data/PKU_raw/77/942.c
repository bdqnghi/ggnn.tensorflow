void main()
{
  char str[100],x,y;
  int i,j,k,n,p,a[100];
  gets(str);
  x=str[0];
  i=1;
  for(i=1;i<=100;i++)
    if(a[i]==x) continue;
    else break;
  y=str[i];
  n=strlen(str);
  for(i=0;i<=n-1;i++)
    if(str[i]==x)
      a[i]=0;
    else
      a[i]=1;
  k=n;
  while(k>0)
  {
     p=0;
     for(i=0;i<=n-2;i++)
       {
        if(a[i]==0)
       {
         for(j=i+1;j<=n-1;j++)
           if(a[j]==0)break;
           else
             if(a[j]==1)
             { a[i]=-1;a[j]=-1;k=k-2;printf("%d %d\n",i,j); p=1; break;}
        } 
       if(p==1) break; 
       }
}
}