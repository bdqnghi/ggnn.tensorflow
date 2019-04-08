
main()
{
      char c;
      int flag=1,a;
      scanf("%c",&c);
      while(c!='\n') 
      {
           if((c==' ' && flag)||(c!=' ')) printf("%c",c);
           if(c==' ') flag=0;
           else flag=1;
           scanf("%c",&c);
      }
}
