
main()
{
      int n, is3, is5, is7;
      int is;
      scanf("%d", &n);
      
      is3 = (n % 3 == 0);
      is5 = (n % 5 == 0);
      is7 = (n % 7 == 0);
      
      is = is3 + is5 + is7;
      switch(is)
      {
                case 0:
                     {
                           printf("n");
                           break;
                     }
                case 3:
                     {
                           printf("3 5 7");
                           break;
                     }
                case 2:
                     {
                           if(is3 && is5) printf("3 5");
                           if(is5 && is7) printf("5 7");
                           if(is7 && is3) printf("3 7");
                           break;
                     }
                case 1:
                     {
                           if(is3) printf("3");
                           if(is5) printf("5");
                           if(is7) printf("7");
                     }
      }
}
