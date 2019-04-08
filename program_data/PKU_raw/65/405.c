main()
{
      int a=0,b=0,n,i,j,k;
      scanf("%d",&n);
      for(i=0;i<n;i++)
      {
                      scanf("%d %d",&j,&k);
                       switch(j-k){
                       case 1:b++;break;
                        case -1:a++;break;
                         case 0: break;
                         case 2: a++;break;
                         case -2:b++;break;}
      }
      if(a>b)
      printf("A");
       if(a==b)
      printf("Tie");
       if(a<b)
      printf("B");
      }