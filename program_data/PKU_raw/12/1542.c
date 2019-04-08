main()
{
  int i,j,n,num,a[17];
  do
   { i=0;
     do
      { i++;
        scanf("%d",&a[i]);
      }while(a[i]>0);
     n=i-1;
     if(a[n+1]!=-1)
      { num=0;
        for(i=1;i<=n-1;i++)
        for(j=i+1;j<=n;j++)
          if(a[i]==2*a[j]||a[j]==2*a[i])
            num++;
        printf("%d\n",num);
      }
   }while(a[n+1]==0);
  return 0;
}