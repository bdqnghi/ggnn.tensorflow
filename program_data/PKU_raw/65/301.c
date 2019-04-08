
main()
{
      int n,i;
      scanf("%d",&n);
      int a[200][2],t=0,r=0;
      int f(int a,int b);
      for(i=0;i<n;i++)
      {
          scanf("%d %d",&a[i][0],&a[i][1]);
          if(f(a[i][0],a[i][1])==1)
              t++;
          if(f(a[i][0],a[i][1])==-1)
              r++;
      }
      if(t>r)
         printf("A");
      else if(t==r)
         printf("Tie");
      else
         printf("B");
      }

int f(int a,int b)
{
    
    if(a-b==-1||a-b==2)
       return 1;
    else if(a==b)
       return 0;
    else
        return -1;
} 
