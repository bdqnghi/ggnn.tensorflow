
main()
{
      int n,i,j,max,num=0;
      scanf("%d",&n);
      int a[n],b[n];
      for(i=0;i<n;i++)
      b[i]=0;
      for(i=0;i<n;i++)
      scanf("%d",&a[i]);
      b[n-1]=1;
      for(i=n-2;i>=0;i--)
      {max=b[i];
       for(j=i+1;j<n;j++)
       {if((a[i]>=a[j])&&(b[j]>=max))
        max=b[j];}
       b[i]=max+1;
       }
       for(i=0;i<n;i++)
       if(b[i]>num)
       num=b[i];
       printf("%d\n",num);

       }
