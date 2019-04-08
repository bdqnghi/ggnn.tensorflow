
main()
{
      char s[1010];
      int l,i,j,k,x;
      char c;
      
      gets(s);
      l=strlen(s);
      for (i=0;i<l;i++)
          s[i]=toupper(s[i]);
      i=0;
      while (i<l)
      {
            c=s[i];
            j=i+1;
            while (j<l && s[j]==c)
                j++;
            x=j-i;
            printf("(%c,%d)",c,x);
            i=j;
      }
      //puts(s);
      printf("\n");
      getchar();
      getchar();
            
}
