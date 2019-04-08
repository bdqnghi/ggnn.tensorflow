main()
{
      char c;
      char x;
      int n=0;
      c=getchar();
      n=1;
      while(1)
      {
              if(c>='a'&&c<='z') c=c-32;
              x=getchar();
              if(x>='a'&&x<='z') x=x-32;
              if(x=='\n')
              {
                         printf("(%c,%d)",c,n);
                         break;
              }
              if(x==c) n++; 
              else
              {
                  printf("(%c,%d)",c,n);
                  c=x;
                  n=1;
              }
      }
}
