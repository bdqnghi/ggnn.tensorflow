main()
{
      int i,a;
      scanf("%d",&i);
      while(i!=1)
      {
                 if (i==1) break;
                 else if(i%2) 
                 {a=3*i+1;
                 printf("%d*3+1=%d\n",i,a);
                 i=a;
                 continue;}
                 else
                 {
                 a=i/2;
                 printf("%d/2=%d\n",i,a);
                 i=a;
                 }
      
                 }
                 printf("End");
                 getchar();
                 getchar();
                 getchar();
}