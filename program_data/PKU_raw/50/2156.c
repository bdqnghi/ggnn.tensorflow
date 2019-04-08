main()
{
      int w,k=0;
      scanf("%d",&w);
      if(((w=w+12)%7)==5) k++,printf("1\n");
      if(((w=w+31)%7)==5) k++,printf("2\n");
      if(((w=w+28)%7)==5) k++,printf("3\n");
      if(((w=w+31)%7)==5) k++,printf("4\n");
      if(((w=w+30)%7)==5) k++,printf("5\n");
      if(((w=w+31)%7)==5) k++,printf("6\n");
      if(((w=w+30)%7)==5) k++,printf("7\n");
      if(((w=w+31)%7)==5) k++,printf("8\n");
      if(((w=w+31)%7)==5) k++,printf("9\n");
      if(((w=w+30)%7)==5) k++,printf("10\n");
      if(((w=w+31)%7)==5) k++,printf("11\n");
      if(((w=w+30)%7)==5) k++,printf("12\n");
      if(k==0) printf("Not found");
      
      }