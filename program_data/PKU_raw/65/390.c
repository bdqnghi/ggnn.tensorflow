
main()
{
      int n,ai=0,bi=0,c;
      scanf("%d",&n);
      int a,b;
      for(c=0;c<n;c++)
      {
        scanf("%d %d",&a,&b);
        if(a==b)
                ;
        else
      {
        if(a==0 && b==1)
        ai++;
        else 
        {
          if(a==1 && b==2)
          ai++;
          else
            {
            if(a==2 && b==0)
             ai++;
             else
             bi++;
            }
        }
        }
      }
      if (ai>bi)
      printf("A");
      else ;
      if (ai==bi)
      printf("Tie");
      else ;
      if (ai<bi)
      printf("B");
      else ;
}
