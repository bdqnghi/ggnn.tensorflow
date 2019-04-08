main()
{
      int i,j,k;
      char c,d;
      char b[1000];
      gets (b);
      k=strlen(b);
      c=b[0];
      j=0;
      for(i=0;i<k+1;i++)
      {

                 if(b[i]==c||b[i]==c+'a'-'A'||b[i]==c+'A'-'a')
                 {
                                                              j++;
                 }
                 else 
                 {
                      if(c>='a'&&c<='z')
                      printf("(%c,%d)",c+'A'-'a',j);
                      else
                      printf("(%c,%d)",c,j);
                      j=1;
                      c=b[i];
                 }
                      
      }
      getchar();
      getchar();
}