main()
{
   int n,i,a[201],b[201],c=0,d=0;
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
                    scanf("%d %d",&a[i],&b[i]);
   }
   for(i=1;i<=n;i++)
   {
                    if(a[i]-b[i]==-1||a[i]-b[i]==2)
                    c++;
                    else
                    {
                        if(a[i]!=b[i])
                        d++;
                    }
   }
   if(c>d)
   printf("A");
   else
   {
       if(c==d)
       printf("Tie");
       else
       printf("B");
   }
   }
