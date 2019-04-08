int vd(const void*t1,const void*t2)
{
   return *((int*)t1)>*((int*)t2)?-1:1;
}
main()
{
  int n;
  scanf("%d",&n); 
  while(n!=0)
  { 
   int i,j,m;
   int head=0;
   int ans=0;
   int tailt=n-1;
   int tailk=n-1;
   int*t=(int*)malloc(n*sizeof(int));
   int*k=(int*)malloc(n*sizeof(int));
   for(i=0;i<n;i++)
   {
     scanf("%d",&t[i]);
   }
   qsort(t,n,sizeof(int),vd);
   for(i=0;i<n;i++)
   {
     scanf("%d",&k[i]);
   }
   qsort(k,n,sizeof(int),vd);
   for(i=0;i<n;i++)
   {
     if(t[head]>k[i])
     {
       head++;
       ans+=200;
     }
     else if(t[head]<k[i])
     {
        tailt--;
        ans-=200;
     }
     else if(t[head]==k[i])
     {
      for(j=tailt,m=tailk;j>=head;j--,m--)
      {
        if(t[j]>k[m])
        {
          ans+=200;
          tailt--;
          tailk--;
        }
        else
        {
          if(t[j]<k[i])ans-=200;
          tailt=j-1;
          tailk=m;
          break;               
         }
        }
      }
     if(head>tailt) break;
    }
   printf("%d\n",ans);
   scanf("%d",&n);
 } 
   getchar();
   getchar();
}  