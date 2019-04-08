main()
{
      int i,j,w;
      scanf("%d",&w);
      int a[12];
      a[0]=13;
      for(i=1;i<=11;i++)
      {
                        if(i==1||i==3||i==5||i==7||i==8||i==10)
                        a[i]=a[i-1]+31;
                        else if(i==2)
                        a[i]=a[i-1]+28;
                        else 
                        a[i]=a[i-1]+30;
      }
      if(w<=5)
      {
      for(i=0;i<=11;i++)
      {j=6-w;
      if((a[i]-j)%7==0)
      printf("%d\n",i+1);
      }      
      }
      else
      {for(i=0;i<=11;i++)
      {j=13-w;
      if((a[i]-j)%7==0)
      printf("%d\n",i+1);
      }
      } 
     
      }