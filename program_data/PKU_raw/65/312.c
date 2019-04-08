
main()
{
      int n;
      scanf("%d",&n);
      int a=0,b=0;
      for (int i=0;i<n;i++)
      {
          int x,y;
          scanf("%d %d",&x,&y);
          if (x-y==-1 || x-y==2) a++;
          else if (x==y) continue;
          else b++;
          
          
      }
      if (a>b) printf("A\n");
      else if (a<b) printf("B\n");
      else printf("Tie\n");
      
      
      
      
      
      
  
}