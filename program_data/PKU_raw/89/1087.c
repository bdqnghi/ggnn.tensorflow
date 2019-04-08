int main()
{
    int n,a[10000],r[10000],k,i,c=1,b=1,frag=0;
    scanf("%d",&n);
    k=n;
    for(i=0;i<n;i++)a[i]=1,r[i]=0;
    for(;;)
    {
      scanf("%d %d",&b,&c);
      if(c+b>0)
         {
               r[c]++;
               if(a[b]==1)k--,a[b]=0;
         }
      else break;
      if(k==0)break;
    }
    if(k==1)
      for(i=0;i<n;i++)
        if(a[i]==1)
          if(r[i]==n-1){printf("%d",i);frag=1;break;}
    if(frag==0)printf("NOT FOUND");
   
}   