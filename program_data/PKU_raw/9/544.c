main()
{
      int a,b,d[100],e,f,g,i,j,x,y,z; 
      char c[100][100];  //g?60????? 
      scanf("%d",&a);
      for(b=0;b<a;b++)
      {
                       scanf("%s %d",c[b],&d[b]);
                       
      }
      for(e=0;e<a;e++)
      {
                      if(d[e]>=60)
                      {i=e;
                      break;
                      } 
      }
      for(e=0,g=0;e<a;e++)
      {
                          
                      if (d[e]>=60)
                      g=g+1;
      }
      for(x=1;x<=g;x++)
      {
          for(e=0;e<a;e++)
          {
                      if(d[e]>=60)
                      {
                                  if(d[i]<d[e])
                                  i=e;
                      }
          }
          printf("%s\n",c[i]);
          d[i]=0;
      }
      for(z=0;z<a;z++)
      {
                      if(d[z]!=0)
                      printf("%s\n",c[z]); 
      } 
      getchar();
      getchar();
      }