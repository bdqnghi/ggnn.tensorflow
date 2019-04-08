main()
{
      char s[10000];
      int i;
      gets(s);
      int l=strlen(s);
        for(i=0;i<l;i++)
        for(int j='a';j<='z';j++)
        if(s[i]==j) s[i]=j-32;
        char max=s[0];int k=0;
      for(i=0;i<=l;i++)
      {
      if(s[i]==max) k++;
      else 
       {
           printf("(%c,%d)",max,k);
           max=s[i];
           k=0;
           i--;
           }

}
      getchar();getchar();
      }
